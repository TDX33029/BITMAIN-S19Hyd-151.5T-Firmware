// FUN_012782bc @ 012782bc size=148 calls_out=1 calls_in=1
// strings: 

void FUN_012782bc(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  piVar3 = param_2 + 2;
  if (*param_2 == 0) {
    local_10 = *(undefined8 *)piVar3;
    local_18[0] = 3;
  }
  else {
    if (*param_2 == 1) {
      iVar1 = *piVar3;
      iVar4 = param_2[3];
      local_18[0] = 1;
    }
    else {
      iVar1 = *piVar3;
      iVar4 = param_2[3];
      local_18[0] = 2;
    }
    local_10 = CONCAT44(iVar4,iVar1);
  }
  uVar2 = FUN_01967538(local_18,param_3,&DAT_01c25920);
  *param_1 = uVar2;
  param_1[2] = 0x80000015;
  return;
}

