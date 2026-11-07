// FUN_012c6b8c @ 012c6b8c size=112 calls_out=1 calls_in=28
// strings: 

undefined4 FUN_012c6b8c(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_1c [3];
  
  uVar4 = *(uint *)(param_1 + 0x14);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) < uVar4) {
    uVar5 = uVar4;
  }
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if (uVar5 == uVar4) break;
    cVar1 = *(char *)(*(int *)(param_1 + 0xc) + uVar4);
    uVar4 = uVar4 + 1;
    cVar2 = *param_2;
    param_3 = param_3 + -1;
    *(uint *)(param_1 + 0x14) = uVar4;
    param_2 = param_2 + 1;
    if (cVar1 != cVar2) {
      local_1c[0] = 9;
LAB_012c6bec:
      uVar3 = FUN_012c6bfc(param_1,local_1c);
      return uVar3;
    }
  }
  local_1c[0] = 5;
  goto LAB_012c6bec;
}

