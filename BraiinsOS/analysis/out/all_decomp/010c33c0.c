// FUN_010c33c0 @ 010c33c0 size=300 calls_out=6 calls_in=0
// strings: 

void FUN_010c33c0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  int local_20;
  uint local_1c;
  
  pcVar3 = &DAT_00000001;
  if (*(int *)(param_3 + 0x10) != 0) {
    uVar6 = FUN_010a61e4(*(undefined4 *)(param_3 + 0xc));
    iVar4 = (int)(uVar6 >> 0x20);
    pcVar3 = (char *)uVar6;
    if (iVar4 != 0) {
      if (*pcVar3 == '[') {
        if (iVar4 == 1) {
          pcVar1 = (char *)0x0;
          iVar2 = -1;
        }
        else {
          pcVar1 = (char *)0x0;
          iVar2 = iVar4 + -2;
          if (pcVar3[iVar4 + -1] == ']') {
            pcVar1 = pcVar3 + 1;
          }
        }
        if (pcVar1 != (char *)0x0) {
          uVar6 = CONCAT44(iVar2,pcVar1);
        }
      }
      iVar4 = (int)(uVar6 >> 0x20);
      pcVar3 = (char *)uVar6;
      if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00600c10();
      }
      if (iVar4 != 0) {
        iVar2 = FUN_0063f47c(iVar4,1);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar4);
        }
        goto LAB_010c3478;
      }
    }
  }
  iVar2 = 1;
  uVar6 = ZEXT48(pcVar3);
LAB_010c3478:
  uVar5 = (uint)(uVar6 >> 0x20);
  FUN_016dd1aa(iVar2,(int)uVar6,uVar5);
  local_24 = uVar5;
  local_20 = iVar2;
  local_1c = uVar5;
  FUN_01574850(&local_38,&local_24);
  if ((char)local_38 == '\x02') {
    *(undefined1 *)param_1 = 2;
    param_1[1] = 1;
    param_1[2] = &DAT_01884ddc;
    return;
  }
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  param_1[4] = uStack_28;
  return;
}

