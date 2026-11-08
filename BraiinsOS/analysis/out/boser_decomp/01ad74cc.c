// FUN_01ad74cc @ 01ad74cc size=164 calls_out=3 calls_in=6
// strings: 

void FUN_01ad74cc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_50 [3];
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [2];
  int local_24;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    local_30 = 0;
  }
  else {
    local_44 = param_1[1];
    local_30 = param_1[2];
    local_3c = 0;
    local_50[1] = 0;
    local_50[2] = iVar3;
    local_38 = iVar3;
    local_34 = local_44;
  }
  local_50[0] = (uint)(iVar3 != 0);
  local_40 = local_50[0];
  while( true ) {
    FUN_01ad7588(local_2c,local_50);
    iVar1 = local_24;
    iVar3 = local_2c[0];
    if (local_2c[0] == 0) break;
    iVar2 = local_2c[0] + local_24 * 0xc;
    FUN_0134bd64(*(undefined4 *)(iVar2 + 0x10dc),*(undefined4 *)(iVar2 + 0x10e0));
    FUN_01ad7748(iVar1 * 0x188 + iVar3);
  }
  return;
}

