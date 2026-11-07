// FUN_00ddb3bc @ 00ddb3bc size=180 calls_out=5 calls_in=0
// strings: 

void FUN_00ddb3bc(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 auStack_f0 [208];
  
  iVar3 = param_2[1];
  iVar2 = param_2[2];
  local_f4 = 0x80;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_110 = 0;
  uStack_10c = 1;
  local_104 = iVar3;
  local_100 = iVar2;
  FUN_00dd5b64(param_1,&local_110);
  if (*param_1 != 6) {
    FUN_01bed4e2(auStack_f0,param_1,0xd0);
    iVar1 = FUN_012c6abc(&local_110);
    if (iVar1 != 0) {
      *param_1 = 6;
      param_1[1] = iVar1;
      FUN_00f862b8(auStack_f0);
    }
  }
  FUN_019bb7e0(local_110,uStack_10c);
  (**(code **)(*param_2 + 0x10))(param_2 + 3,iVar3,iVar2);
  return;
}

