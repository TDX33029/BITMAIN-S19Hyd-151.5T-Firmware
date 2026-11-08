// FUN_01afd084 @ 01afd084 size=216 calls_out=3 calls_in=1
// strings: 

void FUN_01afd084(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  int extraout_r1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_20;
  uint local_1c;
  
  local_1c = DAT_01d53560;
  uVar4 = FUN_01afcf38(param_1,&local_20,param_5,0);
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  if ((int)uVar4 != 0) {
    uVar3 = param_5 - 1;
    do {
      *(char *)(local_20 + uVar3) = (char)param_3;
      uVar3 = uVar3 - 1;
      param_3 = param_3 >> 8 | param_4 << 0x18;
      param_4 = param_4 >> 8;
    } while (uVar3 < param_5);
    if (param_3 == 0 && param_4 == 0) {
      uVar1 = 1;
      iVar2 = local_20;
      goto LAB_01afd118;
    }
    FUN_01afc5c8(param_1);
    iVar2 = extraout_r1;
  }
  uVar1 = 0;
LAB_01afd118:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,iVar2,local_1c ^ DAT_01d53560,0);
  }
  return;
}

