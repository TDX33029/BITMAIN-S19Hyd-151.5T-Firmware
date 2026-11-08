// FUN_0178e03c @ 0178e03c size=104 calls_out=1 calls_in=1
// strings: 

bool FUN_0178e03c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0178dba8();
  uVar1 = DAT_018dffcc;
  if (iVar2 != 0) {
    *param_1 = DAT_018dffc8;
    param_1[1] = uVar1;
  }
  return iVar2 == 0;
}

