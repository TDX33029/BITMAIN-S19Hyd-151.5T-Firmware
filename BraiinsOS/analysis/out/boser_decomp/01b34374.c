// FUN_01b34374 @ 01b34374 size=244 calls_out=7 calls_in=2
// strings: 

undefined4 FUN_01b34374(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_01b2e894(param_4);
  puVar1 = (undefined4 *)FUN_01b2e970(param_4);
  if (((puVar1 == (undefined4 *)0x0) || (iVar2 = FUN_01b2b33c(param_1,param_2), iVar2 == 0)) ||
     (iVar2 = FUN_01b2b248(puVar1,param_1[1]), iVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar2 = param_1[1];
    for (uVar4 = 0; (uint)(iVar2 << 5) >> (uVar4 & 0xff) != 0; uVar4 = uVar4 + 1) {
      FUN_01b33bdc(*puVar1,*param_1,1 << (uVar4 & 0xff),param_1[1]);
      FUN_01b2b82c(*param_1,-(param_3 >> (uVar4 & 0xff) & 1),*puVar1,*param_1,param_1[1]);
    }
    uVar3 = 1;
  }
  FUN_01b2ebbc(param_4);
  return uVar3;
}

