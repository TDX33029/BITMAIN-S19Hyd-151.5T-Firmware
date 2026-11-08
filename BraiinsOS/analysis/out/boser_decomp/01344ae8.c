// FUN_01344ae8 @ 01344ae8 size=112 calls_out=2 calls_in=6
// strings: 

bool FUN_01344ae8(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar2 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar3,uVar2,uVar2,&DAT_01ce6b2c);
  }
  bVar4 = false;
  if (param_3 <= uVar2 - uVar3) {
    iVar1 = thunk_FUN_01bed842(param_2,*param_1 + uVar3,param_3);
    bVar4 = iVar1 == 0;
    if (bVar4) {
      param_1[2] = uVar3 + param_3;
    }
  }
  return bVar4;
}

