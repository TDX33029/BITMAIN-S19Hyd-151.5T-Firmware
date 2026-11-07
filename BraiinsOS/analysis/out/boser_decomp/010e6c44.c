// FUN_010e6c44 @ 010e6c44 size=144 calls_out=5 calls_in=3
// strings: 

void FUN_010e6c44(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  
  FUN_019ac130(&local_70,1);
  uVar2 = uStack_6c + (0xfffffffa < local_70);
  if ((int)((uStack_6c ^ uVar2) & ~uStack_6c) < 0) {
    FUN_019e6e14(&local_70);
  }
  else {
    uVar3 = FUN_019ef7f4(param_3);
    uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
    FUN_019dc4f8(&local_70,(int)uVar3,uVar1,uVar1,local_70 + 5,uVar2,uStack_68,param_3);
  }
  FUN_01bed4e2(param_1,&local_70,0x50);
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}

