// FUN_01444220 @ 01444220 size=160 calls_out=3 calls_in=2
// strings: 

void FUN_01444220(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,char *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  
  uVar1 = FUN_007364cc(param_5,param_1,param_2,param_3,param_4);
  if (*param_5 == '\x01') {
    if (param_4 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar1,param_4,param_4,&DAT_01cf8e6c);
    }
    uVar3 = -uVar1 & 3;
    if (uVar3 != 0) {
      iVar2 = param_4 - uVar1;
      puVar4 = (undefined1 *)(param_3 + uVar1);
      iVar5 = iVar2;
      do {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(iVar2,iVar2,&DAT_01c07bf0);
        }
        *puVar4 = 0x3d;
        iVar5 = iVar5 + -1;
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

