// FUN_0188fb80 @ 0188fb80 size=196 calls_out=6 calls_in=3
// strings: 

void FUN_0188fb80(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_100 [152];
  int local_68;
  undefined1 auStack_60 [64];
  
  iVar2 = param_2[3];
  FUN_01bed93e(auStack_60,0,0x40);
  uVar3 = *(uint *)(iVar2 + 0x48);
  if (0x40 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar3,0x40,&DAT_01d213bc);
  }
  iVar1 = FUN_01891c24(*param_2,param_2[1],param_2[2],auStack_60,uVar3,param_2[4]);
  if ((iVar1 != 0) || (FUN_0188fc54(auStack_100,iVar2,auStack_60,uVar3), local_68 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,auStack_60,&DAT_01d2134c,&DAT_01d2133c);
  }
  FUN_01bed4e2(param_1,auStack_100,0xa0);
  return;
}

