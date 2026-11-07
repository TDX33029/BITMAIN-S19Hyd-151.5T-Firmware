// FUN_00f69b14 @ 00f69b14 size=256 calls_out=2 calls_in=1
// strings: 

void FUN_00f69b14(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_00f6aec0(param_2,param_3);
  uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
  if (uVar2 != 0) {
    iVar5 = 0;
    uVar3 = 0;
    iVar4 = extraout_r3;
    do {
      cVar1 = *(char *)((int)uVar7 + uVar3);
      uVar3 = uVar3 + 1;
      if (iVar5 == 0) {
        iVar5 = 1;
        iVar4 = 1;
        if (cVar1 != '(') {
          *param_1 = 0;
          *(undefined1 *)(param_1 + 1) = 3;
          return;
        }
      }
      else {
        if (iVar5 == 1) {
          if (cVar1 == '(') {
            iVar4 = iVar4 + 1;
          }
          else {
            if (cVar1 != ')') {
              iVar5 = 2;
              if (cVar1 != '\\') {
                iVar5 = 1;
              }
              goto LAB_00f69b48;
            }
            iVar4 = iVar4 + -1;
            if (iVar4 == 0) {
              pcVar6 = (char *)((int)uVar7 + uVar3);
              if (uVar3 < uVar2) {
                if (-0x41 < *pcVar6) {
LAB_00f69c04:
                  *param_1 = pcVar6;
                  param_1[1] = uVar2 - uVar3;
                  return;
                }
              }
              else if (uVar2 == uVar3) goto LAB_00f69c04;
                    /* WARNING: Subroutine does not return */
              FUN_00faa8ac();
            }
          }
        }
        iVar5 = 1;
      }
LAB_00f69b48:
    } while (uVar2 != uVar3);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 4;
  return;
}

