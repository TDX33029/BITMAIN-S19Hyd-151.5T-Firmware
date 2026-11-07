// FUN_011f00a0 @ 011f00a0 size=72 calls_out=3 calls_in=2
// strings: 

void FUN_011f00a0(uint param_1)

{
  undefined1 auStack_14 [12];
  
  if ((param_1 & 1) == 0) {
    FUN_00664898(auStack_14,&DAT_00590423);
    FUN_006679ac(auStack_14);
    return;
  }
  FUN_00667978(&DAT_00590423,param_1 >> 1);
  return;
}

