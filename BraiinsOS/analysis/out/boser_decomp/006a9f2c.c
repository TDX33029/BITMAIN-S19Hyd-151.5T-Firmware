// FUN_006a9f2c @ 006a9f2c size=204 calls_out=1 calls_in=1
// strings: 

bool FUN_006a9f2c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_2c [3];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_2c[2] = *(int *)(param_1 + 0x40);
  local_20 = *(undefined4 *)(param_1 + 0x44);
  local_c = *(undefined4 *)(param_1 + 0x48);
  if (local_2c[2] == 0) {
    local_c = 0;
  }
  local_2c[0] = (uint)(local_2c[2] != 0);
  local_18 = 0;
  local_2c[1] = 0;
  local_1c = local_2c[0];
  local_14 = local_2c[2];
  local_10 = local_20;
LAB_006a9f78:
  do {
    iVar1 = FUN_006bf6e0(local_2c);
    if (iVar1 == 0) goto LAB_006a9fe8;
    uVar2 = 2;
    if ((int)*(uint *)(iVar1 + 0x10) < 0) {
      uVar2 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
    }
    if (uVar2 == 2) {
      iVar3 = 0x98;
      if (*(int *)(iVar1 + 0x98) == -0x80000000) goto LAB_006a9f78;
    }
    else if (((uVar2 != 1) || (*(int *)(iVar1 + 0x88) == -0x80000000)) ||
            (iVar3 = 0x88, (*(byte *)(iVar1 + 0x9a) & 1) == 0)) goto LAB_006a9f78;
    if (*(int *)(iVar1 + iVar3 + 8) != 0) {
LAB_006a9fe8:
      return iVar1 != 0;
    }
  } while( true );
}

