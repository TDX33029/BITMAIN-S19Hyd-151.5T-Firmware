// FUN_0128d210 @ 0128d210 size=244 calls_out=2 calls_in=1
// strings: 

void FUN_0128d210(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r3;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_0073498c(param_2,param_3);
  uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
  if (uVar3 != 0) {
    iVar6 = 0;
    uVar4 = 0;
    iVar5 = extraout_r3;
    do {
      cVar1 = *(char *)((int)uVar8 + uVar4);
      uVar4 = uVar4 + 1;
      if (iVar6 == 0) {
        iVar5 = 1;
        iVar6 = 1;
        if (cVar1 != '(') {
          *param_1 = 0;
          uVar2 = 3;
          goto LAB_0128d2ac;
        }
      }
      else {
        if (iVar6 == 1) {
          if (cVar1 == '(') {
            iVar5 = iVar5 + 1;
          }
          else {
            if (cVar1 != ')') {
              iVar6 = 2;
              if (cVar1 != '\\') {
                iVar6 = 1;
              }
              goto LAB_0128d298;
            }
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) {
              pcVar7 = (char *)((int)uVar8 + uVar4);
              if (uVar4 < uVar3) {
                if (*pcVar7 < -0x40) {
LAB_0128d2e0:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb514();
                }
              }
              else if (uVar3 != uVar4) goto LAB_0128d2e0;
              *param_1 = pcVar7;
              param_1[1] = uVar3 - uVar4;
              return;
            }
          }
        }
        iVar6 = 1;
      }
LAB_0128d298:
    } while (uVar3 != uVar4);
  }
  *param_1 = 0;
  uVar2 = 4;
LAB_0128d2ac:
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}

