/*
Interface: arduino
Nom du projet: Nouveau projet
Description: 
Toolbox: vittascience
Mode: mixed

Blocks: <xml xmlns="https://developers.google.com/blockly/xml"><variables><variable id="6g1vP,oYuqMCRAESX92*">btnIndex</variable><variable id="U4-M8k4)5iWfH26b6RTT">timeout</variable><variable id="p,.}kQa[oo$MnQ:mg.+)">success</variable><variable id="GN~mM%/Z}?rDf)toXReS">startTime</variable><variable id="+2lk(c[/W?N)~l1m7e5)">targetIndex</variable><variable id="PF{]FwS`OkQQk,O[C0pa">modeJeu</variable><variable id="MV/WpEW~N}]W]dmP#z_?">PIN_BUZZER</variable><variable id="31u=(+g+w1b^pDHAdDSD">score</variable><variable id="LLu#GGxy3n08gkl3Dsri">i</variable></variables><block type="procedures_defreturn" id="/Es_K/c}2!XF.DyVa9cR" x="688" y="-87"><mutation name="waitForInput"><arg name="btnIndex" varid="6g1vP,oYuqMCRAESX92*" paramId="6g1vP,oYuqMCRAESX92*"></arg><arg name="timeout" varid="U4-M8k4)5iWfH26b6RTT" paramId="-uj?ZEV9z;XY(G)xD1B8"></arg></mutation><field name="NAME">waitForInput</field><field name="6g1vP,oYuqMCRAESX92*">btnIndex</field><field name="TYPES_6g1vP,oYuqMCRAESX92*">NUMBER</field><field name="-uj?ZEV9z;XY(G)xD1B8">timeout</field><field name="TYPES_-uj?ZEV9z;XY(G)xD1B8">NUMBER</field><statement name="STACK"><block type="variables_set" id="(^@iY:.+WM_a)=[39q46"><field name="VAR" id="GN~mM%/Z}?rDf)toXReS">startTime</field><value name="VALUE"><block type="io_getChronometer_simple" id="Frsf,~LeS0RRqdRZ80y+"></block></value><next><block type="controls_whileUntil" id="Hr)7Dd`)R=m]..!t4|nf"><field name="MODE">WHILE</field><value name="BOOL"><block type="logic_compare" id="rZSL/Kx|jXs[Zb%*[W1U"><field name="OP">LT</field><value name="A"><block type="math_arithmetic" id=":)iy1lx)HvkAL(dAZfBe"><field name="OP">MINUS</field><value name="A"><block type="io_getChronometer_simple" id="A;,H`h~+MMK`}t}i[;$F"></block></value><value name="B"><block type="variables_get" id="$peU=w$FX(1ugag,y;o|"><field name="VAR" id="GN~mM%/Z}?rDf)toXReS">startTime</field></block></value></block></value><value name="B"><block type="variables_get" id="eaMq2A1uw}TJ8oeNW+tk"><field name="VAR" id="U4-M8k4)5iWfH26b6RTT">timeout</field></block></value></block></value><statement name="DO"><block type="controls_if" id="8FHMphN(?bc5q-RaUyfi"><value name="IF0"><block type="logic_compare" id="ZV%v4iUpLGpA62~|bF-!"><field name="OP">EQ</field><value name="A"><block type="io_readDigitalPin_input" id="0y=mdTeER4F5X-Mnk6do"></block></value><value name="B"><block type="io_digital_signal" id="goubzgnWam`FBtJ^4*ac"><field name="STATE">HIGH</field></block></value></block></value><statement name="DO0"><block type="comment_block" id="$k+(=rcH7PZmIr]ue4qV"><field name="COMMENT"> Anti-rebond simple (pour éviter double appui)</field><next><block type="io_wait" id="X*P!Re_me4_G7q9QY=Sw"><field name="UNIT">MILLI</field><value name="TIME"><block type="math_number" id=")jBJ;cjH01z?wU96H`X3"><field name="NUM">200</field></block></value><next><block type="comment_block" id="L9:=8X3YJEh]w3F)(?wO"><field name="COMMENT"> Bouton appuyé !</field></block></next></block></next></block></statement></block></statement><next><block type="comment_block" id="}CdUi^SLQ~}Ia3Vs}xwh"><field name="COMMENT"> Temps écoulé sans appui</field></block></next></block></next></block></statement><value name="RETURN"><block type="logic_boolean" id="-.tA(qje]_{7Aa/OTA*/"><field name="BOOL">FALSE</field></block></value></block><block type="comment_block_standalone" id="Q/%3y)Xlrssnn;THoRUH" x="12" y="12"><field name="COMMENT">/*
 * PROJECT: Arduino Whac-A-Mole (Tape-Taupe)
 * AUTHORS: Othmane BAHRI, Titouan DUFRAIGNE
 * HARDWARE: Arduino Mega 2560
 */</field></block><block type="comment_block_standalone" id="m^`|k3$#i6)weMqIj5n2" x="20" y="74"><field name="COMMENT"> --- CONFIGURATION MATÉRIELLE (HARDWARE) ---</field></block><block type="comment_block_standalone" id="mD)ZTQkg2~.YjZyEzJn6" x="20" y="128"><field name="COMMENT"> Tes boutons selon ton code original</field></block><block type="comment_block_standalone" id="$BAS,p(7P9vKY^TwpjHx" x="20" y="182"><field name="COMMENT"> ATTENTION : Je ne vois que "led1 = 3" dans ton code. </field></block><block type="comment_block_standalone" id="Rs($?`4|B38qXGCErwPd" x="20" y="236"><field name="COMMENT"> J'ai supposé que les autres suivent. Vérifie ton câblage pour les LEDs !</field></block><block type="comment_block_standalone" id="pde|r9XHW$~8@@Y:`|{L" x="20" y="290"><field name="COMMENT"> Ton buzzer sur le pin 7</field></block><block type="comment_block_standalone" id="}RJ$2i=E5T2cYk{iEki^" x="20" y="344"><field name="COMMENT"> --- PARAMÈTRES DU JEU ---</field></block><block type="comment_block_standalone" id="oG_L3CUJzts9@YR*Wn[O" x="20" y="398"><field name="COMMENT"> Temps pour réagir (ms)</field></block><block type="comment_block_standalone" id="nlJ`,imtmT6=/U#`i2Is" x="20" y="452"><field name="COMMENT"> --- FONCTIONS UTILITAIRES (Pour ne pas répéter le code) ---</field></block><block type="comment_block_standalone" id="%y^nLApp.DTl1S_S8,ca" x="20" y="506"><field name="COMMENT"> Fonction qui attend l'appui sur un bouton précis pendant un temps donné</field></block><block type="comment_block_standalone" id="N4?]c#n8$)x2We|y$JJ0" x="20" y="560"><field name="COMMENT"> Gestion des sons et messages</field></block><block type="on_start" id="i}u?0lVo{@8u/%acZN8z" x="-187" y="613"><statement name="DO"><block type="communication_serialBegin" id="dg-E[|E0HF;#`4,tz?Vq"><value name="SPEED"><block type="math_number" id="vY#8rA~_ka.(~hHT#6S/"><field name="NUM">9600</field></block></value><next><block type="comment_block" id="o,Ih90jGmw2SLB=!q@@y"><field name="COMMENT"> Initialisation LCD</field><next><block type="display_lcdRGBSetText" id="S$zN8[ZewiVMESSvs?If"><field name="ADDR">0x27</field><field name="LINE">0</field><field name="POS">0</field><value name="TEXT"><block type="text" id="LvMaTENLR]@NrSqSg%ai"><field name="TEXT">TAPE-TAUPE</field></block></value><next><block type="display_lcdRGBSetText" id="a.;cTLl-]?ja6rS-`zMe"><field name="ADDR">0x27</field><field name="LINE">1</field><field name="POS">0</field><value name="TEXT"><block type="text" id="ms%D#(:Ikq2Ev?B}v5~`"><field name="TEXT">Pret ?</field></block></value><next><block type="io_wait" id="RwhY6%s^i1g=2Beqe##["><field name="UNIT">MILLI</field><value name="TIME"><block type="math_number" id=":^i!7?b(4p_1m+$FZ,uj"><field name="NUM">2000</field></block></value><next><block type="display_lcdRGBClear" id="6ihwdBkZ`d]7o~xbT1fq"><field name="ADDR">0x27</field><next><block type="comment_block" id="ENz.Y2?KJ/w`FJu]T?6g"><field name="COMMENT"> Initialisation des Pins</field><next><block type="comment_block" id="ep9gH}XpqzGQ3kKOS6TX"><field name="COMMENT"> Boucle pour configurer les 6 boutons et LEDs d'un coup</field><next><block type="controls_for" id="DYsF.p@Ica,)m6TyiY]C"><field name="VAR" id="LLu#GGxy3n08gkl3Dsri">i</field><value name="FROM"><block type="math_number" id="8e(,F}5V34m3hrn*nJq0"><field name="NUM">0</field></block></value><value name="TO"><block type="math_number" id="AWI`FdKjapy0ImzLYS{l"><field name="NUM">6</field></block></value><value name="BY"><block type="math_number" id="@*Bf$~BD5@Te[[Gf=[Fa"><field name="NUM">1</field></block></value></block></next></block></next></block></next></block></next></block></next></block></next></block></next></block></next></block></statement></block><block type="procedures_defnoreturn" id="8?xuwQ1O{;*c8U3B{9Jq" x="788" y="713"><mutation name="feedback"><arg name="success" varid="p,.}kQa[oo$MnQ:mg.+)" paramId="M`~CNvkV`e=hR*,pOZ=b"></arg></mutation><field name="NAME">feedback</field><field name="M`~CNvkV`e=hR*,pOZ=b">success</field><field name="TYPES_M`~CNvkV`e=hR*,pOZ=b">NUMBER</field><statement name="STACK"><block type="display_lcdRGBClear" id="qGN*`rC^gi_z6+KIS3OT"><field name="ADDR">0x27</field><next><block type="controls_if" id="_bG[hrHRpw/03w)K88yj"><mutation else="1"></mutation><value name="IF0"><block type="variables_get" id="L^4e{NQ.kH*j,0u74)j|"><field name="VAR" id="p,.}kQa[oo$MnQ:mg.+)">success</field></block></value><statement name="DO0"><block type="call_expression_editable" id="eu]Z%eSg)Uy1SD1y8=bA"><mutation items="3"></mutation><field name="NAME">tone</field><value name="items0"><block type="variables_get" id="X#YuPa`X;I}5(R{44jm)"><field name="VAR" id="MV/WpEW~N}]W]dmP#z_?">PIN_BUZZER</field></block></value><value name="items1"><block type="math_number" id="g1e2CR6#|}N{d)1[;SuD"><field name="NUM">1000</field></block></value><value name="items2"><block type="math_number" id="S][MQ*49XZRr(a,MCgJm"><field name="NUM">100</field></block></value><next><block type="comment_block" id="?vC|hO7o7/`tOTuFme+w"><field name="COMMENT"> Bip aigu</field><next><block type="call_expression" id="0|/do|GvCI#1s^POLSzc"><field name="NAME">lcd</field><value name="chain"><block type="call_expression_editable_return" id="?yGjjaRS}:.WO2*vlq2Q"><mutation items="2"></mutation><field name="NAME">setCursor</field><value name="items0"><block type="math_number" id="?){gK.rewHb5Yvk7D:Q_"><field name="NUM">0</field></block></value><value name="items1"><block type="math_number" id="8,@FGO3Y3jEm0W|f4hh/"><field name="NUM">0</field></block></value></block></value><next><block type="display_lcdRGBSetText" id="8]Y@yj7:but:X/F01S+?"><field name="ADDR">0x27</field><field name="LINE">1</field><field name="POS">0</field><value name="TEXT"><block type="text" id="!)f2f3!_8M+}Usz];eer"><field name="TEXT">Gagne !</field></block></value></block></next></block></next></block></next></block></statement><statement name="ELSE"><block type="call_expression_editable" id="N?4U$i;W6$IO,U$h[BP$"><mutation items="3"></mutation><field name="NAME">tone</field><value name="items0"><block type="variables_get" id="vFl]YJFZ9A*ZF,h5pjOe"><field name="VAR" id="MV/WpEW~N}]W]dmP#z_?">PIN_BUZZER</field></block></value><value name="items1"><block type="math_number" id="^B$Cz]u,ySkN~}y2~Y=T"><field name="NUM">200</field></block></value><value name="items2"><block type="math_number" id="I]06]fnZQ###jz8KiD=`"><field name="NUM">500</field></block></value><next><block type="comment_block" id="eewIH,Tpedk-MoG#YSq;"><field name="COMMENT"> Bip grave</field><next><block type="call_expression" id="h^%CljZskB%61v27Z05*"><field name="NAME">lcd</field><value name="chain"><block type="call_expression_editable_return" id=".m:NFWa-[8y~:tIHa%OH"><mutation items="2"></mutation><field name="NAME">setCursor</field><value name="items0"><block type="math_number" id="pxfAz:8aW9n}jL_}%gcd"><field name="NUM">0</field></block></value><value name="items1"><block type="math_number" id="hw8|R+;e*A)dk_pwL@At"><field name="NUM">0</field></block></value></block></value><next><block type="display_lcdRGBSetText" id="x_5/qRy8)[zoPY^iJVU:"><field name="ADDR">0x27</field><field name="LINE">1</field><field name="POS">0</field><value name="TEXT"><block type="text" id="1Rw0A1k*D6VFGFvDe8D_"><field name="TEXT">RATE !</field></block></value></block></next></block></next></block></next></block></statement><next><block type="io_wait" id="rFy2~K_!w%2:?A}!7aI$"><field name="UNIT">MILLI</field><value name="TIME"><block type="math_number" id="4uh@6%y?,HC[?*Tu?.2@"><field name="NUM">500</field></block></value><next><block type="comment_block" id="o!d,sAl/sMf|c/%6.`eu"><field name="COMMENT"> Petit temps pour lire</field><next><block type="display_lcdRGBClear" id="{kTv`S{sF}(8*F0mLI{O"><field name="ADDR">0x27</field></block></next></block></next></block></next></block></next></block></statement></block><block type="forever" id="ShNN~#]C:.EKF/N_STrp" x="-238" y="1363"><statement name="DO"><block type="comment_block" id="0;hxtO{m.ChWWJ}Z6Isc"><field name="COMMENT"> 1. Choisir une cible au hasard (0 à 5)</field><next><block type="variables_set" id="qToNRrZ$:,6]d;=#a_w{"><field name="VAR" id="+2lk(c[/W?N)~l1m7e5)">targetIndex</field><value name="VALUE"><block type="math_random_int" id="lMg(fjqqnOU~]alx@sQg"><value name="FROM"><block type="math_number" id="t:S%{{0lkWTh?zl|JZ;;"><field name="NUM">0</field></block></value><value name="TO"><block type="math_number" id="/XL?9Ix7Y.PH@qj{hIuW"><field name="NUM">6</field></block></value></block></value><next><block type="comment_block" id="p*Uj6;-uo]GT(vA4XZLX"><field name="COMMENT"> 2. Choisir le type d'événement (Piège ou Normal ?)</field><next><block type="variables_set" id="T5fzpcBT4~qagJBNh{w/"><field name="VAR" id="PF{]FwS`OkQQk,O[C0pa">modeJeu</field><value name="VALUE"><block type="math_random_int" id="Uq6AlI7K_t0i,uXEpfU@"><value name="FROM"><block type="math_number" id="4Sc6I5d5PWBXfD-=[?0p"><field name="NUM">0</field></block></value><value name="TO"><block type="math_number" id="FN{_7}r4U!TCmw#/rvk|"><field name="NUM">10</field></block></value></block></value><next><block type="comment_block" id="g)eX5K_ME-E}mj#p-KQu"><field name="COMMENT"> 0-10</field><next><block type="procedures_callnoreturn" id="]BcQ3I07sN8$?fD89zWr"><mutation name="updateDisplay"></mutation><next><block type="comment_block" id="v33*CJS=a-4PS08b^48X"><field name="COMMENT"> On allume la LED cible</field><next><block type="call_expression_editable" id="0f22?_HhD)5z?hp6T+?3"><mutation items="2"></mutation><field name="NAME">digitalWrite</field><value name="items1"><block type="io_digital_signal" id="yg9W4K71_19oMlVrKAUk"><field name="STATE">HIGH</field></block></value><next><block type="comment_block" id="f6GgD=wa=hR(a,e,y*zH"><field name="COMMENT"> --- MODE PIÈGE (Si random &gt; 7, soit 20-30% de chance) ---</field><next><block type="comment_block" id="DZ*+t8`{}Oe39uGC~2Va"><field name="COMMENT"> 3. Reset pour le tour suivant</field><next><block type="call_expression_editable" id="0(ZKwm,szBEKu+|K[.6z"><mutation items="2"></mutation><field name="NAME">digitalWrite</field><value name="items1"><block type="io_digital_signal" id="x:?*M+*).0~7H_SR47vW"><field name="STATE">LOW</field></block></value><next><block type="io_wait" id="ScEzvnB{0#EzQciiI(vK"><field name="UNIT">MILLI</field><value name="TIME"><block type="math_number" id="@Cv0{#[(BWo!6v*nT}|}"><field name="NUM">500</field></block></value><next><block type="comment_block" id="uLHaq-,G?d05AeE-skZj"><field name="COMMENT"> Petite pause entre deux taupes</field></block></next></block></next></block></next></block></next></block></next></block></next></block></next></block></next></block></next></block></next></block></next></block></next></block></statement></block><block type="procedures_defnoreturn" id="6oP}GUU_-bX`GgA3Pg`U" x="738" y="1863"><mutation name="updateDisplay"></mutation><field name="NAME">updateDisplay</field><statement name="STACK"><block type="call_expression" id="l{/Kl/B!hY$O3vBjn7,%"><field name="NAME">lcd</field><value name="chain"><block type="call_expression_editable_return" id="Z?YF!.%pV:^q|k7^%)iP"><mutation items="2"></mutation><field name="NAME">setCursor</field><value name="items0"><block type="math_number" id="WW|k^+Iy?`F#u?Zu[OAS"><field name="NUM">0</field></block></value><value name="items1"><block type="math_number" id="u7^PQ)L+}{/)P%IH6V|}"><field name="NUM">0</field></block></value></block></value><next><block type="display_lcdRGBSetText" id="rY*_+^V)@axy0jv`?pY1"><field name="ADDR">0x27</field><field name="LINE">1</field><field name="POS">0</field><value name="TEXT"><block type="text" id="}7$`rNF?,pi=*$7C4?RH"><field name="TEXT">Score: </field></block></value><next><block type="display_lcdRGBSetText" id="6KHk*H/DNNbgv-?]%Q%n"><field name="ADDR">0x27</field><field name="LINE">1</field><field name="POS">0</field><value name="TEXT"><block type="variables_get" id="Y_;!s:1BR/QyE;7+D_o."><field name="VAR" id="31u=(+g+w1b^pDHAdDSD">score</field></block></value></block></next></block></next></block></statement></block></xml>

Projet généré par Vittascience.
Ce fichier contient le code textuel ainsi que le code blocs. Il peut être importé de nouveau
sur l'interface http://vittascience.com/arduino

*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

float startTime;
int i;
int targetIndex;
int modeJeu;

///*
 * PROJECT: Arduino Whac-A-Mole (Tape-Taupe)
 * AUTHORS: Othmane BAHRI, Titouan DUFRAIGNE
 * HARDWARE: Arduino Mega 2560
 */
// --- CONFIGURATION MATÉRIELLE (HARDWARE) ---
// Tes boutons selon ton code original
// ATTENTION : Je ne vois que "led1 = 3" dans ton code.
// J'ai supposé que les autres suivent. Vérifie ton câblage pour les LEDs !
// Ton buzzer sur le pin 7
// --- PARAMÈTRES DU JEU ---
// Temps pour réagir (ms)
// --- FONCTIONS UTILITAIRES (Pour ne pas répéter le code) ---
// Fonction qui attend l'appui sur un bouton précis pendant un temps donné
// Gestion des sons et messages

boolean waitForInput(int btnIndex, int timeout) {
  startTime = millis();
  while (millis() - startTime < timeout) {
    if (digitalRead(0) == HIGH) {
      //  Anti-rebond simple (pour éviter double appui)
      delay(200);
      //  Bouton appuyé !
    }
  }
  //  Temps écoulé sans appui
  return false;
}

void feedback(int success) {
  lcd.clear();
  if (success) {
    tone(PIN_BUZZER, 1000, 100);
    //  Bip aigu
    lcd.setCursor(0, 0);
    lcd.setCursor(0, 1);
    lcd.print(String("Gagne !"));
  } else {
    tone(PIN_BUZZER, 200, 500);
    //  Bip grave
    lcd.setCursor(0, 0);
    lcd.setCursor(0, 1);
    lcd.print(String("RATE !"));
  }
  delay(500);
  //  Petit temps pour lire
  lcd.clear();
}

void updateDisplay() {
  lcd.setCursor(0, 0);
  lcd.setCursor(0, 1);
  lcd.print(String("Score: "));
  lcd.setCursor(0, 1);
  lcd.print(String(score));
}


void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  //  Initialisation LCD
  lcd.setCursor(0, 0);
  lcd.print(String("TAPE-TAUPE"));
  lcd.setCursor(0, 1);
  lcd.print(String("Pret ?"));
  delay(2000);
  lcd.clear();
  //  Initialisation des Pins
  //  Boucle pour configurer les 6 boutons et LEDs d'un coup
  for (i = 0; i <= 6; i++) {
  }
}

void loop() {
  //  1. Choisir une cible au hasard (0 à 5)
  targetIndex = random(0, 6);
  //  2. Choisir le type d'événement (Piège ou Normal ?)
  modeJeu = random(0, 10);
  //  0-10
  updateDisplay();
  //  On allume la LED cible
  digitalWrite(null, HIGH);
  //  --- MODE PIÈGE (Si random > 7, soit 20-30% de chance) ---
  //  3. Reset pour le tour suivant
  digitalWrite(null, LOW);
  delay(500);
  //  Petite pause entre deux taupes
}