// FUN_014a5038 @ 014a5038 size=224 calls_out=1 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x014a50d4) */

void FUN_014a5038(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iStack_c;
  
  iVar6 = *param_2;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a55f8);
  }
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iStack_c = param_2[3];
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      bVar1 = *(byte *)(iVar2 + iVar4);
      if (bVar1 < 0x20) {
        if (bVar1 != 9) goto LAB_014a50b0;
      }
      else if (bVar1 == 0x7f) {
LAB_014a50b0:
        pcVar5 = *(code **)(iVar6 + 0x10);
        *(undefined1 *)(param_1 + 4) = 2;
        (*pcVar5)(&iStack_c);
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  *param_1 = iVar6;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  param_1[3] = iStack_c;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

