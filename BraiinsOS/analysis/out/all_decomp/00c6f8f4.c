// FUN_00c6f8f4 @ 00c6f8f4 size=244 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_00c6f8f4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  uint local_50 [3];
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_50[2] = *param_1;
  local_44 = param_1[1];
  uVar6 = 0;
  local_30 = param_1[2];
  if (local_50[2] == 0) {
    local_30 = 0;
  }
  local_50[0] = (uint)(local_50[2] != 0);
  iVar5 = 0;
  local_3c = 0;
  local_50[1] = 0;
  local_40 = local_50[0];
  local_38 = local_50[2];
  local_34 = local_44;
  while( true ) {
    uVar8 = FUN_00c3901c(local_50);
    iVar1 = (int)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0 || iVar1 == 0) {
      return CONCAT44(iVar5,uVar6);
    }
    FUN_009d42ac(&local_2c,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28));
    if (local_24 == 0) break;
    iVar1 = 0;
    uVar4 = 0;
    iVar3 = 0;
    do {
      uVar2 = *(uint *)(local_28 + iVar1 * 4);
      iVar1 = iVar1 + 1;
      bVar7 = CARRY4(uVar4,uVar2);
      uVar4 = uVar4 + uVar2;
      iVar3 = iVar3 + (uint)bVar7;
    } while (local_24 != iVar1);
    if (local_2c != 0) {
      thunk_FUN_016d3fb4(local_28);
    }
    bVar7 = CARRY4(uVar4,uVar6);
    uVar6 = uVar4 + uVar6;
    iVar5 = iVar3 + iVar5 + (uint)bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
}

