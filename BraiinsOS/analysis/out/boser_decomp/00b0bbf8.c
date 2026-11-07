// FUN_00b0bbf8 @ 00b0bbf8 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_00b0bbf8(uint param_1)

{
  undefined1 auStack_14 [12];
  
  if ((param_1 & 1) == 0) {
    FUN_00664898(auStack_14,&DAT_0058ccaf);
    FUN_006679ac(auStack_14);
    return;
  }
  FUN_00667978(&DAT_0058ccaf,param_1 >> 1);
  return;
}

