// FUN_01904478 @ 01904478 size=188 calls_out=3 calls_in=0
// strings: 

void FUN_01904478(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  uVar2 = *(undefined4 *)(*param_2 + 8);
  uVar3 = *(undefined4 *)(*param_2 + 0xc);
  FUN_019269f4(&local_34,0x30,&DAT_0059a383,0xd,1,0);
  FUN_019269f4(&local_28,3,&DAT_00523849,1,uVar2,uVar3);
  iVar1 = local_24;
  FUN_01657150(&local_34,local_24,local_24 + local_20);
  FUN_0134bd64(local_28,iVar1);
  FUN_019269f4(&local_28,0x30,local_30,local_2c,1,0);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  FUN_0134bd64(local_34,local_30);
  return;
}

