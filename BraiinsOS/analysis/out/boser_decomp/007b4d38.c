// FUN_007b4d38 @ 007b4d38 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_007b4d38(uint param_1)

{
  undefined1 auStack_14 [12];
  
  if ((param_1 & 1) == 0) {
    FUN_00664898(auStack_14,&DAT_005972eb);
    FUN_006679ac(auStack_14);
    return;
  }
  FUN_00667978(&DAT_005972eb,param_1 >> 1);
  return;
}

