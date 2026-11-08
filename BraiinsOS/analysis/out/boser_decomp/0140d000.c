// FUN_0140d000 @ 0140d000 size=536 calls_out=5 calls_in=3
// strings: parsing should validate brackets

undefined8 FUN_0140d000(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  undefined4 local_14;
  
  uStack_30 = 0;
  local_14 = 1;
  local_18 = 1;
  local_24 = 1;
  local_20 = 0;
  local_28 = 0x40;
  local_3c = 0x40;
  local_38 = param_1;
  uStack_34 = param_2;
  local_2c = param_2;
  local_1c = param_2;
  uVar6 = FUN_0140d230(&local_3c);
  uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
  pcVar1 = (char *)uVar6;
  if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_0056c308,0x20,&DAT_01cf3f7c);
  }
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01cf3f8c);
  }
  uVar5 = 0;
  if (*pcVar1 != '[') {
    do {
      uVar3 = uVar4 - uVar5;
      if (uVar3 < 8) {
        uVar2 = 0;
        if (uVar3 == 0) {
          uVar7 = 0;
        }
        else {
          do {
            if ((pcVar1 + uVar5)[uVar2] == ':') {
              uVar7 = CONCAT44(uVar2,1);
              goto LAB_0140d168;
            }
            uVar2 = uVar2 + 1;
          } while (uVar3 != uVar2);
          uVar7 = (ulonglong)uVar3 << 0x20;
        }
      }
      else {
        uVar7 = FUN_01307168(0x3a,pcVar1 + uVar5);
      }
LAB_0140d168:
      if ((uVar7 & 1) == 0) break;
      uVar5 = uVar5 + (int)(uVar7 >> 0x20);
      if ((uVar5 < uVar4) && (pcVar1[uVar5] == ':')) {
        uVar4 = uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= uVar4);
LAB_0140d1b8:
    return CONCAT44(uVar4,pcVar1);
  }
  do {
    uVar3 = uVar4 - uVar5;
    if (uVar3 < 8) {
      uVar2 = 0;
      if (uVar3 == 0) {
        uVar7 = 0;
      }
      else {
        do {
          if ((pcVar1 + uVar5)[uVar2] == ']') {
            uVar7 = CONCAT44(uVar2,1);
            goto LAB_0140d0c8;
          }
          uVar2 = uVar2 + 1;
        } while (uVar3 != uVar2);
        uVar7 = (ulonglong)uVar3 << 0x20;
      }
    }
    else {
      uVar7 = FUN_01307168(0x5d,pcVar1 + uVar5);
    }
LAB_0140d0c8:
    if ((uVar7 & 1) == 0) break;
    uVar5 = (int)(uVar7 >> 0x20) + uVar5;
    if ((uVar5 < uVar4) && (pcVar1[uVar5] == ']')) {
      uVar5 = uVar5 + 1;
      if ((uVar5 < uVar4) && (pcVar1[uVar5] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(pcVar1,uVar4,0,uVar5,&DAT_01cf3fac);
      }
      uVar4 = uVar5;
      goto LAB_0140d1b8;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 <= uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_0130739c("parsing should validate brackets",0x20,&DAT_01cf3f9c);
}

