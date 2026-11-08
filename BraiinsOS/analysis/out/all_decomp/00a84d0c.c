// FUN_00a84d0c @ 00a84d0c size=72 calls_out=3 calls_in=1
// strings: 

void FUN_00a84d0c(uint param_1)

{
  undefined1 auStack_14 [12];
  
  if ((param_1 & 1) == 0) {
    FUN_00600d2c(auStack_14,&DAT_005820b9);
    FUN_00ac0530(auStack_14);
    return;
  }
  FUN_00ac0588(&DAT_005820b9,param_1 >> 1);
  return;
}

