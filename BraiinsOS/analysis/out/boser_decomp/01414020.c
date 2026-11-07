// FUN_01414020 @ 01414020 size=68 calls_out=3 calls_in=0
// strings: 

void FUN_01414020(undefined2 *param_1,int param_2)

{
  undefined2 local_a;
  
  local_a = *param_1;
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      FUN_012fcf18();
    }
    else {
      FUN_012fa300();
    }
  }
  else {
    FUN_012fd958(&local_a);
  }
  return;
}

