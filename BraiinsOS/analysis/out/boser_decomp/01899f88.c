// FUN_01899f88 @ 01899f88 size=220 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_01899f88(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_428 [1031];
  undefined1 uStack_21;
  
  FUN_01bed93e(auStack_428,0,0x400);
  uVar5 = param_4 >> 3;
  if ((param_4 & 7) != 0) {
    uVar5 = (param_4 >> 3) + 1;
  }
  if (0x400 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar5,0x400,&DAT_01d21d9c);
  }
  FUN_01899dc8(param_1,param_2,auStack_428,uVar5);
  uVar1 = param_3[1];
  uVar4 = param_3[2];
  if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_21,&DAT_01d21c6c,&DAT_01d30444);
  }
  param_3[2] = uVar1;
  uVar2 = 1;
  if ((uVar1 - uVar4 == uVar5) &&
     (iVar3 = thunk_FUN_01bed842(*param_3 + uVar4,auStack_428,uVar5), uVar2 = 0, iVar3 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

