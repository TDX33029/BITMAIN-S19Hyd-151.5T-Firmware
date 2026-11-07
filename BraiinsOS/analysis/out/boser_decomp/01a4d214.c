// FUN_01a4d214 @ 01a4d214 size=224 calls_out=4 calls_in=2
// strings: 

void FUN_01a4d214(undefined4 *param_1,int param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *local_78;
  int local_74;
  undefined1 auStack_68 [72];
  
  uVar4 = 0;
  iVar3 = (int)param_3 * 0x48;
  if (&UNK_01c71c71 < param_3) {
LAB_01a4d23c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar3);
  }
  if (iVar3 == 0) {
    local_74 = 4;
    local_78 = (undefined *)0x0;
  }
  else {
    uVar4 = 4;
    local_74 = FUN_01298504(iVar3,4);
    if (local_74 == 0) goto LAB_01a4d23c;
    local_78 = param_3;
    if (param_3 != (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
      iVar1 = local_74;
      do {
        if (iVar3 == 0) break;
        FUN_01a60910(auStack_68,param_2);
        FUN_01bed4e2(iVar1,auStack_68,0x48);
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 + 0x48;
        iVar3 = iVar3 + -0x48;
        param_2 = param_2 + 0x48;
      } while (param_3 != puVar2);
    }
  }
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = param_3;
  return;
}

