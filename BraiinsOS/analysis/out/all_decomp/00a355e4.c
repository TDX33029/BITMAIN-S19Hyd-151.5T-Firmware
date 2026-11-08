// FUN_00a355e4 @ 00a355e4 size=60 calls_out=3 calls_in=2
// strings: 

void FUN_00a355e4(undefined4 param_1,uint param_2)

{
  undefined1 auStack_14 [12];
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(auStack_14,param_1);
    FUN_00ac0530(auStack_14);
    return;
  }
  FUN_00ac0588(param_1,param_2 >> 1);
  return;
}

