from flyer_class import *
from sys import *


def is_digit(string):
    if string.isdigit():
        return True
    else:
        try:
            float(string)
            return True
        except ValueError:
            return False


while True:
    print("\n\nПриветствуем Вас на нашей площадке\nВыбирайте ваш транспорт")
    print("\n1. Хотите интуитивный интерфейс?\n2. Вам нужна машина для путешествий?\n3. Деловой стиль и "
          "функционал?\n4. Что-нибудь, лишь бы ехать\n0. Ну и финалист нашего предложения\n\n5. Передумали?")
    func = input("\nВаш выбор: ")
    if func in ["1", "2", "3", "4", "5", "0"]:
        func = int(func)
        if func == 1:
            fly_car = flyer(0, 0, 0, 0, 10, 1000, 'Instruction_for_blond.txt')
            print("\nПоздравляем! Ааааатличный выбор!")
            print("\nЗамечательный корраловый цвет, просто огромный бак (по секрету - 1000;))")
            print("\nинтуитивный интерфейс с огромными розовыми буквами под каждым индикатором на приборной панели!")
            print("\nВ общем, для блондинки то, что нужно. Пссс... но за расходом топлива всё-таки следить не забывайте\n")
            break
        elif func == 2:
            fly_car = flyer(0, 0, 1000, 0, 8, 90, 'Instruction_for_traveler.txt')
            print("\nВы путешественник? Для вас замечательный вариант!")
            print("\nЛетун с небольшим пробегом - отлично работающая лошадка")
            print("\nВместительный бак, расход топлива вас приятно удивит.\n")
            break
        elif func == 3:
            fly_car = flyer(0, 0, 0, 0, 6, 60, 'Instruction_for_business.txt')
            print("\nВсё для бизнес-леди. Совершенно новый флаер.")
            print("\nНулевой налёт, средний бак, минимальный расход топлива.")
            print("\n$Приятных полётов$\n")
            break
        elif func == 4:
            fly_car = flyer(0, 0, 50000, 0, 2, 40, 'Instruction_for_need_to_go.txt')
            print("\nДействительно? Ну, что ж. Видимо это монстр ждал именно Вас.")
            print("\nНеприхотлив. Устойчив в воздухе. Налётанность, конечно даёт себя знать...")
            print("\nХочу предупредить, запаситесь дополнительными канистрами горючего. Мало ли что...")
            print("\nИ будьте аккуратнее на виражах и при посадке\n")
            break
        elif func == 0:
            fly_car = flyer(0, 0, 0, 80, 10, 120, 'Instruction_for_digital_universe.txt')
            print("\nСнимаю шляпу! Вы знаете, чего хотите!")
            print("\nЭто просто мозг! Вершина цифровых технологий!")
            print("\nОн позаботится о всех ваших желаниях и потребностях ещё на подлёте;)")
            print("\nНаслаждайтесь\n")
            break
        elif func == 5:
            print("\nСпасибо за ваше внимание. До свидания.")
            exit()
    else:
        print("\nВы уверены? Простите, но вам нельзя в воздух. Поищите магазинчик с самокатами.\n")
        exit()

print("\nПриветствую вас на борту! Отправимся в путешествие. С чего начнём?")
while True:
    print("\nВаши действия:")
    print("1. Заправиться")
    print("2. Полетели")
    print("3. Пробег (он же налёт)")
    print("4. Сколько топлива в баке?")
    print("5. Отдохнуть, ну и всё, что с этим связано")
    print("6. Что-то ещё?")
    print("7. Читать инструкцию")
    print("0. Завершить путешествие")
    ans = int(input("\nВаш выбор: "))
    choice = False

    if ans == 0:
        print("\nСпасибо, что воспользовались нашими услугами. Ждём Вас снова.\n")
        exit()

    fw = 0
    if ans == 1:
        if func == 0:
            print('Вид топлива определён')
        else:
            f = input("\nВыберите топливо:\n1. Бензин\n2. Солнце\n3. Дрова\n4. Керосин\n0. Не знаю\nВаш выбор: ")
            if f in ["1", "2", "3", "4", "0"]:
                f = int(f)
                if func == 1:
                    if f != 1 and f != 0:
                        print("\nМадам, а ваша болонка ест шурупы? Вы бы почитали инструк... Ой, простите")
                        print("Считаем, что Вы выбрали 1\n")
                    choice = True
                elif func == 2:
                    if f == 2:
                        print("\nМечтать не вредно\n")
                    elif f == 3:
                        print("\nВы костёр жечь прямо в салоне будете?\n")
                    elif f != 1:
                        print("\nЧитайте инcтрукцию\n")
                    else:
                        choice = True
                elif func == 3:
                    print("\nПриятно иметь дело с деловым партнёром. Я рассмотрю вашу заявку\n")
                    choice = True
                else:
                    print("\nГотово. Можете лететь")
                    fly_car.fuel = 40
            else:
                print("\nНайдите кнопочку со значком, похожим на 1, 2, 3, 4, или 0. Попробуйте.")

        if func == 0:
            fly_car.fuel = 120
            print("Заправка окончена. Приятного полёта")
        if choice and (func == 1 or func == 2 or func == 3):
            temp = input("\nСколько топлива вам потребуется? ")
            if is_digit(temp):
                f = float(temp)
                a = fly_car.refill(f)
                if a == 1:
                    print("\nЗаправка выполнена\n")
                    fw = 0
                if a == 2:
                    if func == 1:
                        print("\nБак полон. Топливо вытекло наружу. В вашем багажнике есть розовая тряпочка\n")
                    if func == 2:
                        print("\nРасточительство. Могли бы остатки топлива на розжиг костра оставить")
                        print("\nТеперь только машину близко к костру не ставьте. Бак полон\n")
                    if func == 3:
                        print("\nКак Вы могли! Вы же деловой человек")
                        print("\nНу ладно, остатки горючего упакованы в полиэтиленовый пакетик")
                        print("\nЧаевые оставьте себе\n")
                    fw = 1
                if a == 3:
                    print("\nЗначит, самоката так и не нашли? Мимикрия у вас на высоте. Пройдитесь пешочком.\n")
                    exit()
            else:
                print("\nЗначит, самоката так и не нашли? Мимикрия у вас на высоте. Пройдитесь пешочком.\n")
                exit()

    if ans == 2:
        km = input("\nКак далеко едем (расстояние в км)? ")
        if not is_digit(km):
            print("\nПоищите циферки")
        else:
            km = float(km)
            h = input("\nНа какой высоте летим (в км)? ")
            if not is_digit(h):
                print("\nПоищите циферки")
            else:
                h = float(h)
                if h < 0:
                    print("\nДля этого в багажнике есть лопата. Привет шахтёрам")
                else:
                    fcf = fly_car.fuel
                    a = fly_car.flying(h, km)
                    if a:
                        # if - 1000 < fly_car.getx() < 1000:
                        print("\nВы добрались до нужных координат\n")
                    else:
                        if h == 0 or fcf == 0:
                            print("\nУ вас закончилось топливо, чтобы доехать, требуется заправка\n")
                        else:
                            if h > fcf * fly_car.fuel_cons:
                                h = fcf * fly_car.fuel_cons
                            if func == 0:
                                print("\nУ вас закончилось топливо на высоте", h,
                                      "Парашют успешно раскрыт. Чтобы доехать, требуется заправка\n")
                            elif func == 1:
                                print("\nУ вас закончилось топливо на высоте", h,
                                      "В бардачке есть розовый зонтик - полуавтомат. Не забудьте собачку.",
                                      "Полёт окончен. Дальше автостопом.\n")
                                exit()
                            elif func == 2 or func == 3:
                                print("\nУ вас закончилось топливо на высоте", h,
                                      "Вы умеете планировать? 1 - да, 2 - нет\n")
                                if int(input()) == 1:
                                    print("\nВы успешно приземлились. Чтобы доехать, требуется заправка\n")
                                else:
                                    print("\nКатапультируйтесь. Game over\n")
                                    exit()
                            else:
                                print("\nУ вас закончилось топливо на высоте", h, ".",
                                      "\nМожете быстро покидать в топку подручные материалы.",
                                      "\nКакие-какие? Мало в салоне вещей? Хватайте коврик...",
                                      "\nДа хоть ботинки свои! Лишь бы долететь хватило!",
                                      "\nФуууууу...",
                                      "\nДля продолжения пути требуется заправка\n")

    if ans == 3:
        print("\nВы уехали от начальной точки на ", fly_car.getx(), " км",
              "\nПробег составил ", fly_car.dist, "км.")
        if fly_car.dist > 100000:
            if func == 1:
                print("\nМадам, Вам знакомо понятие \"пробег\"?",
                      "\n(ой, да кого я спрашиваю?..) В общем, разворачивайтесь",
                      "\nвыносливости вашей машинки ещё хватит, чтобы вернуться.")
            if func == 2:
                print("\nУважение! Вы действительно достойны звания \"Путешественник\" -",
                      "\nтак укатать транспорт. Пробег вашей машинки на данный момент -", fly_car.dist, " км",
                      "\nРекомендуется воспользоваться услугами ближайшего сервиса ТО.")
            if func == 3:
                print("\nПробег вашей машинки составил ", fly_car.dist, "км.",
                      "\nЕсли поблизости Вы не наблюдаете сервиса техобслуживания,",
                      "\nДля вызова мобильной службы скажите \"да\" - время прибытия вертолёта -",
                      "\nот трёх минут до пяти рабочих дней. Оплата по дополнительному тарифу",
                      "\nВ случае отрицательного ответа благополучного возвращения на данном флаере не гарантируется.")
            if func == 4:
                print("\nВы превысили рекомендуемый пробег. Отвалился глушитель. Течёт топливный шланг.",
                      "\nЗаедает автоподатчик дров в топку. В общем, ваша очередь толкать машину.",
                      "\nИ не вздумайте босить её. В соглашении предусмотрен пункт ответственности за сохранность",
                      "\nаммортизируемого имущества.")
            if func == 0:
                print("\nПробег (читай: налёт) составил ", fly_car.dist, " км.",
                      "\nВам не о чем волноваться. Система автоматически следит за заменой изношенного оборудования.",
                      "\nПо необходимости происходит автоматический сброс ненужных и устаревших деталей.",
                      "\nВаше вмешательство не требуется (читай: не нужно)",
                      "\nЕсли уже были попытки освободиться от Вас, книга жалоб и предложений в бардачке.",
                      "\nМы рассмотрим все ваши замечания и пожелания.")
        if -20 <= fly_car.getx() < 200:
            print("\nШикарные виды каменных построек. Здесь ещё жив дух урбанизации. Удрать бы отсюда поскорее.",
                  "\nЖми на газ, а?")
        if 200 <= fly_car.getx() < 400:
            print("\nПоля. Просторные и свежие диким ароматом трав и цветов. Как легко дышится...",
                  "\nЗадержимся на пару часов?")
        if 400 <= fly_car.getx() < 600:
            print("\nДуши смелых ярко-рыжих сосен",
                  "\nСнова повстречаются у брода.",
                  "\nТихою знакомою картинкой",
                  "\nЗасинеет омут сталью зыбкой...")
        if 600 <= fly_car.getx() < 640:
            print("\nСвет в окошке - свечки язычок там.",
                  "\nВорожит, кабыть знахарка дланью.",
                  "\nВ ожиданьи много ли почёта?",
                  "\nИ к чему приводят расстоянья?")
        if 640 <= fly_car.getx() < 800:
            print("\nДиковатая степь. И за жёлтым туманным песчаником",
                  "\nТянет бурые пальцы сожжённый лучами кустарник.",
                  "\nКто ты, в этой дороге себя возомнивший начальником?",
                  "\nИ откуда ты взялся, всегда неприкаянный странник?")
        if 800 <= fly_car.getx() < 900:
            print("\nПустыня седая. Лишь серые скалы",
                  "\nВисят, на снега молчаливо взирая.",
                  "\nДивятся со льдистых уступов марлы.",
                  "\nДа стонет серебряный лёд, дно скрывая.")
        if 900 <= fly_car.getx() < 1000:
            print("\nТравка, цветы василёчки, рядом костёр, шашлычки.",
                  "\nКушай, мой мальчик, пока твои зубки, пока твои зубки...",
                  "\nНе превратились в клыки!",
                  "\nЛюдоеды!",
                  "\nКуда Вас занесло???!!! Быстро в машину и по газам!!!")
            if func == 1:
                print("\nА Вы, мадам с болонкой, что стоите? Вы их, несомннено, очаровали...",
                      "\nДва блюда, включая десерт.",
                      "\nДолго будете изображать памятник блондинке?",
                      "\n....................",
                      "\nБолонка за штурвалом %OOOOO",
                      "\nСнимаю шляпу")
        if -200 < fly_car.getx() < -20:
            print("\nЛежат штабелями зелёные рыльца -",
                  "\nКоса пробежалась, звеня, по поляне.")
        if -240 < fly_car.getx() <= -200:
            print("\nЗапарена парочка веников в шайке.",
                  "\nА по камелёнке шальной кипяточек.",
                  "\nХватило бы. В виды видавшей фуфайке",
                  "\nМужик у лесочка топорики точит.")
        if -400 < fly_car.getx() <= -240:
            print("\nКолодезной каплей",
                  "\nЗатоплено два этажа... муравейник",
                  "\nПоставлен в ружьё! Пятилетку в три года!",
                  "\nПастух проворонил сквозь храп - ах, бездельник! -",
                  "\nТлей дойное стадо отборной породы.")
        if -600 < fly_car.getx() <= -400:
            print("\nПод берегом морда опущена в воду,",
                  "\nНабитая щедро. Прикормкой с камнями.",
                  "\nДва шустрых карасика юркнули с ходу...",
                  "\nПодальше - она уж полна окунями.")
        if -800 < fly_car.getx() <= -600:
            print("\nКарасики жарят шашлык окунёвый,",
                  "\nЧуть сбрызнув (на вкус) кислотой муравьиной.",
                  "\nА в небе над всем этим искрой сверхновой",
                  "\nПроносится спутник. Измазаный глиной",
                  "\nПолзёт наблюдатель с большим телескопом.")
        if -900 < fly_car.getx() <= -800:
            print("\nТут днём комаров - в две руки отмахаться,",
                  "\nА ночью вобще беспредел... ой, газетки.",
                  "\nСейчас запалим... где бы спичкам тут взяться?",
                  "\nНа чём там карасики окуня жарят?",
                  "\nРебят, поделись огоньком, ну не жабьтесь.")
        if -1000 < fly_car.getx() <= -900:
            print("\nВсё ещё в минус жмёте? Вот вы в своём уме?")
        if fly_car.getx() <= -1000 or fly_car.getx() >= 1000:
            print("\nНе надоело ещё? Выбирайте пилюлю: 1 - синяя, 2 - красная")
            if input() == 2:
                exit()

    if ans == 4:
        if fly_car.fuel == 0:
            print("\nВ вашем баке не осталось топлива. Заправочку?\n")
        else:
            print("\nВ вашем баке ", fly_car.fuel, " единиц (ну, вы же помните, чем заправляетесь?)")
            print("Если нет, читайте инструкцию\n")

    if ans == 5:
        if fw == 0:
            if func == 1:
                print("\nВашей собачке требуется променад. Справа от шоссе замечательные кустики")
                print("Помните о сохранении природы, не забудьте пакетик, чтобы убрать за болонкой\n")
            if func == 2:
                print("\nРазмяться не помешает. Если бы вы приобрели бонус \"Всё включено\",")
                print("в вашем бардачке оказался бы термос с горячим кофе\n")
            if func == 3:
                print("\nСамый лучший отдых - смена деятельности")
                print("Пока лошадки... хм... скорее, Пегасы, под капотом отдыхают,")
                print("Вы можете насладиться поиском доступной сети для просмотра состояния ваших инвестиций\n")
        else:
            if func == 1:
                print("\nВы хорошо протёрли вашу машину после заправки? А розовая тряпочка где?")
                print("Положили в багажник? Точно? А скакой стороны?")
                print("Спереди? Под капот?! Там ещё такие клеммочки разноцветные? А дымком оттуда же тянет?")
                print("Хватайте вашу болонку и делайте ноги!!! Вы уже вовсюда приехали!!!\n")
            if func == 2:
                print("\nШикарная у Вас сигара. Кубинская? Отошли бы вы от техники...")
                print("Поздно... ни бардачка, ни термоса с горячим кофе\n")
            if func == 3:
                print("\nРабота работой, а обед по расписанию")
                print("Чтобы костерок быстрее разгорелся, у вас там в полиэтиленчике")
                print("бензинчик упакован. Только целиком не бросайте!!! Ааааа...\n")
        if func == 4:
            print("\nЖмите дальше, вам же ехать надо. Отдых не ваш вариант\n")
        if func == 0:
            print("\nРасслабьтесь и наслаждайтесь масажем. Наша умная техника сама решит,")
            print("что Вам нужно в данный момент. Это не страшно. Универсальный памерс - изюминка проекта\n")

    if ans == 6:
        print("\nВас приветствует автоответчик. Можете исполнить свои желания после сигнала")
        print("Бип...\n")

    if ans == 7:
        fly_car.print_instr()

    if ans < 0 or ans > 7:
        print("\nСосредоточьтесь! У Вас получится. Возможно...")
