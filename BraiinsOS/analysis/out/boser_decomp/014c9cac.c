// FUN_014c9cac @ 014c9cac size=112 calls_out=3 calls_in=18
// strings: 

undefined4 FUN_014c9cac(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  
  iVar2 = param_1[5];
  iVar3 = param_1[7];
  FUN_014deae0(param_1 + 4);
  uVar1 = 0;
  if (iVar3 != iVar2) {
    local_1c = param_1[8];
    uVar1 = FUN_014dee0c(local_1c + ((uint)(iVar3 - iVar2) >> 5),&local_1c,&DAT_01cfa00c);
  }
  if (*param_1 != -0x7fffffeb) {
    FUN_014c81b0(param_1);
  }
  return uVar1;
}

