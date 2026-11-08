// FUN_015ead1c @ 015ead1c size=540 calls_out=5 calls_in=4
// strings: 

void FUN_015ead1c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined1 local_1c;
  
  *(undefined1 *)(param_1 + 0x44) = 1;
  FUN_01656cb0(&local_30);
  iVar1 = local_2c;
  if (local_30 == 1) {
    local_1c = (undefined1)local_28;
    local_20 = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01cfd938,&DAT_01cfd9e0);
  }
  uVar4 = local_28 & 0xff;
  FUN_015eaf80(local_2c + 8,0);
  if (*(int *)(iVar1 + 0x2c) != -0x80000000) {
    FUN_015ef948(&local_30);
    if (local_30 != local_2c) {
      piVar6 = (int *)(local_30 + 4);
      uVar5 = (uint)(local_2c - local_30) >> 3;
      do {
        uVar2 = *(uint *)(*piVar6 + 8);
        uVar3 = uVar2 - 1;
        if (uVar2 < 5) {
          uVar2 = 4;
        }
        (**(code **)(*piVar6 + 0xc))
                  (piVar6[-1] + (uVar2 - 1 & 0xfffffff8) + (uVar3 & 0xfffffff4) + 0x14);
        piVar6 = piVar6 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (local_28 != local_24) {
      piVar6 = (int *)(local_28 + 4);
      uVar5 = local_24 - local_28 >> 3;
      do {
        uVar2 = *(uint *)(*piVar6 + 8);
        uVar3 = uVar2 - 1;
        if (uVar2 < 5) {
          uVar2 = 4;
        }
        (**(code **)(*piVar6 + 0xc))
                  (piVar6[-1] + (uVar2 - 1 & 0xfffffff8) + (uVar3 & 0xfffffff4) + 0x14);
        piVar6 = piVar6 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  FUN_015ef948(&local_30,iVar1 + 0x18);
  if (local_30 != local_2c) {
    piVar6 = (int *)(local_30 + 4);
    uVar5 = (uint)(local_2c - local_30) >> 3;
    do {
      uVar2 = *(uint *)(*piVar6 + 8);
      uVar3 = uVar2 - 1;
      if (uVar2 < 5) {
        uVar2 = 4;
      }
      (**(code **)(*piVar6 + 0xc))
                (piVar6[-1] + (uVar2 - 1 & 0xfffffff8) + (uVar3 & 0xfffffff4) + 0x14);
      piVar6 = piVar6 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (local_28 != local_24) {
    piVar6 = (int *)(local_28 + 4);
    uVar5 = local_24 - local_28 >> 3;
    do {
      uVar2 = *(uint *)(*piVar6 + 8);
      uVar3 = uVar2 - 1;
      if (uVar2 < 5) {
        uVar2 = 4;
      }
      (**(code **)(*piVar6 + 0xc))
                (piVar6[-1] + (uVar2 - 1 & 0xfffffff8) + (uVar3 & 0xfffffff4) + 0x14);
      piVar6 = piVar6 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_00a97e8c(iVar1,uVar4);
  return;
}

