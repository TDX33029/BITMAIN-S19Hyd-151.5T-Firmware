// FUN_00a57a98 @ 00a57a98 size=68 calls_out=3 calls_in=13
// strings: 

void FUN_00a57a98(undefined4 param_1,uint param_2)

{
  undefined1 auStack_14 [12];
  
  if ((param_2 & 1) == 0) {
    FUN_00664898(auStack_14,param_1);
    FUN_006679ac(auStack_14);
    return;
  }
  FUN_00667978(param_1,param_2 >> 1);
  return;
}

