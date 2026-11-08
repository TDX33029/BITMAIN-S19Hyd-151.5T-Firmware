// FUN_012666d8 @ 012666d8 size=112 calls_out=3 calls_in=5
// strings: 

undefined4 FUN_012666d8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  
  iVar2 = param_1[5];
  iVar3 = param_1[7];
  FUN_01264de8(param_1 + 4);
  uVar1 = 0;
  if (iVar3 != iVar2) {
    local_1c = param_1[8];
    uVar1 = FUN_014dee0c(local_1c + ((uint)(iVar3 - iVar2) >> 5),&local_1c,&DAT_01cfa00c);
  }
  if (*param_1 != -0x7fffffeb) {
    FUN_012663cc(param_1);
  }
  return uVar1;
}

