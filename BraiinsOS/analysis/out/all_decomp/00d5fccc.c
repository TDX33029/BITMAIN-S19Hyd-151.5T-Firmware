// FUN_00d5fccc @ 00d5fccc size=36 calls_out=0 calls_in=1
// strings: 

bool FUN_00d5fccc(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < param_1[1]) {
    *param_1 = uVar1 + 1;
  }
  return uVar1 < param_1[1];
}

