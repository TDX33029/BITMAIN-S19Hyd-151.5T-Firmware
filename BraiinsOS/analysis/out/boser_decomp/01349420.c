// FUN_01349420 @ 01349420 size=644 calls_out=8 calls_in=1
// strings: overflow when adding duration to instant

undefined4 FUN_01349420(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  uint local_38;
  undefined1 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  iVar7 = *param_1;
  if (iVar7 == 0) {
    uVar5 = 1;
  }
  else {
    piVar1 = (int *)FUN_01349278(*(undefined4 *)(iVar7 + 0x40));
    if (piVar1 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar7 + 0x3c);
      puVar2 = (uint *)(iVar7 + 0x3c);
      DataMemoryBarrier(0xb);
      do {
        if ((uVar3 & 2) != 0) goto LAB_013495b0;
        uVar4 = *puVar2;
        if (uVar4 == uVar3) {
          DataMemoryBarrier(0xb);
          do {
            bVar9 = (bool)hasExclusiveAccess(puVar2);
            if (bVar9) {
              *puVar2 = (uVar3 & 0xfffffffc) + 4;
              bVar9 = true;
              uVar3 = uVar4;
              goto LAB_013494ac;
            }
            uVar4 = *puVar2;
          } while (uVar4 == uVar3);
        }
        bVar9 = false;
        ClearExclusiveLocal();
        uVar3 = uVar4;
LAB_013494ac:
        DataMemoryBarrier(0xb);
      } while (!bVar9);
      FUN_019ac130(&local_30,1);
      uVar4 = local_30 + param_3;
      uVar3 = local_2c + param_4 + (uint)CARRY4(local_30,param_3);
      if ((int)param_4 < 0 != (int)((local_2c ^ uVar3) & ~(local_2c ^ param_4)) < 0) {
LAB_0134952c:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
      }
      puVar6 = (undefined1 *)(param_5 + local_28);
      if (&DAT_3b9aca00 <= puVar6) {
        bVar9 = 0xfffffffe < uVar4;
        uVar4 = uVar4 + 1;
        uVar8 = uVar3 + bVar9;
        if ((int)((uVar3 ^ uVar8) & ~uVar3) < 0) goto LAB_0134952c;
        puVar6 = puVar6 + -1000000000;
        uVar3 = uVar8;
      }
      FUN_01933ff0(&local_30,iVar7 + 0x18);
      if (local_30 == 1) {
        local_34 = (undefined1)local_28;
        local_38 = local_2c;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01ce6cd0,&DAT_01ce6cb0);
      }
      *(uint *)(local_2c + 8) = uVar4;
      *(uint *)(local_2c + 0xc) = uVar3;
      *(undefined1 **)(local_2c + 0x10) = puVar6;
      FUN_00a97e8c(local_2c,local_28 & 0xff);
      iVar7 = FUN_01349330(piVar1 + 2,*param_1);
      if (iVar7 == 0) {
        puVar2 = (uint *)(piVar1 + 5);
        DataMemoryBarrier(0xb);
        do {
          uVar3 = *puVar2;
          bVar9 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar9);
        *puVar2 = uVar3 | 2;
        DataMemoryBarrier(0xb);
        if (uVar3 == 0) {
          iVar7 = piVar1[3];
          piVar1[3] = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar9 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar9);
          *puVar2 = *puVar2 & 0xfffffffd;
          if (iVar7 != 0) {
            (**(code **)(iVar7 + 4))(piVar1[4]);
          }
        }
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar1;
          bVar9 = (bool)hasExclusiveAccess(piVar1);
        } while (!bVar9);
        *piVar1 = iVar7 + -1;
        uVar5 = 0;
      }
      else {
LAB_013495b0:
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar1;
          bVar9 = (bool)hasExclusiveAccess(piVar1);
        } while (!bVar9);
        *piVar1 = iVar7 + -1;
        uVar5 = 1;
      }
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01348fc8(piVar1);
      }
    }
  }
  return uVar5;
}

