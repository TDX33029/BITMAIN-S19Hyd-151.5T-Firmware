// FUN_008357a8 @ 008357a8 size=1044 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_008357a8(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  double *pdVar7;
  int iVar8;
  double dVar9;
  undefined4 local_58;
  int local_54;
  undefined1 *local_50;
  undefined1 local_49;
  undefined1 *local_48;
  undefined *local_44;
  uint local_40;
  uint uStack_3c;
  
  pdVar7 = *(double **)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 8);
  uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418df9,1);
  if (iVar8 == 0) goto LAB_0083597c;
  puVar5 = param_2 + 2;
  if (uVar1 == 0) {
    uVar1 = *puVar5;
    if ((uVar1 & 0x800000) != 0) {
      iVar4 = param_2[1];
      uVar3 = *param_2;
      iVar2 = (**(code **)(iVar4 + 0xc))(uVar3,&DAT_0041950e,1);
      if (iVar2 == 0) {
        local_50 = &local_49;
        local_49 = 1;
        local_40 = *puVar5;
        uStack_3c = param_2[3];
        local_44 = &DAT_01880dc4;
        local_58 = uVar3;
        local_54 = iVar4;
        if ((local_40 & 0x10000000) == 0) {
          dVar9 = ABS(*pdVar7);
          if ((1e+16 <= dVar9) || (*pdVar7 != 0.0 && dVar9 < 0.0001)) {
            local_48 = (undefined1 *)&local_58;
            iVar2 = FUN_00fb1b5c(&local_48,(local_40 & 0x3fffff) >> 0x15);
          }
          else {
            local_48 = (undefined1 *)&local_58;
            iVar2 = FUN_00fb1850(&local_48,(local_40 & 0x3fffff) >> 0x15,1);
          }
        }
        else {
          local_48 = (undefined1 *)&local_58;
          iVar2 = FUN_00fb1470(&local_48,(local_40 & 0x3fffff) >> 0x15,uStack_3c >> 0x10);
        }
        if (iVar2 == 0) {
          uVar1 = (**(code **)(local_44 + 0xc))(local_48,&DAT_00414a81,2);
          goto joined_r0x00835974;
        }
      }
      goto LAB_00835970;
    }
    if ((uVar1 & 0x10000000) == 0) {
      dVar9 = ABS(*pdVar7);
      if ((1e+16 <= dVar9) || (*pdVar7 != 0.0 && dVar9 < 0.0001)) {
        uVar1 = FUN_00fb1b5c(param_2,(uVar1 & 0x3fffff) >> 0x15);
      }
      else {
        uVar1 = FUN_00fb1850(param_2,(uVar1 & 0x3fffff) >> 0x15,1);
      }
    }
    else {
      uVar1 = FUN_00fb1470(param_2,(uVar1 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe));
    }
  }
  else {
LAB_00835970:
    uVar1 = 1;
  }
joined_r0x00835974:
  if (iVar8 != 1) {
    iVar8 = iVar8 * 8 + -8;
    do {
      pdVar7 = pdVar7 + 1;
      uVar6 = uVar1 & 1;
      uVar1 = 1;
      if (uVar6 == 0) {
        uVar6 = *puVar5;
        if ((uVar6 & 0x800000) == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
          uVar1 = 1;
          if (iVar2 == 0) {
            if ((uVar6 & 0x10000000) == 0) {
              dVar9 = ABS(*pdVar7);
              if ((1e+16 <= dVar9) || (*pdVar7 != 0.0 && dVar9 < 0.0001)) {
                uVar1 = FUN_00fb1b5c(param_2,(uVar6 & 0x3fffff) >> 0x15);
              }
              else {
                uVar1 = FUN_00fb1850(param_2,(uVar6 & 0x3fffff) >> 0x15,1);
              }
            }
            else {
              uVar1 = FUN_00fb1470(param_2,(uVar6 & 0x3fffff) >> 0x15,
                                   *(undefined2 *)((int)param_2 + 0xe));
            }
          }
        }
        else {
          local_58 = *param_2;
          local_54 = param_2[1];
          local_49 = 1;
          local_50 = &local_49;
          local_40 = *puVar5;
          uStack_3c = param_2[3];
          local_44 = &DAT_01880dc4;
          if ((local_40 & 0x10000000) == 0) {
            dVar9 = ABS(*pdVar7);
            if ((1e+16 <= dVar9) || (*pdVar7 != 0.0 && dVar9 < 0.0001)) {
              local_48 = (undefined1 *)&local_58;
              iVar2 = FUN_00fb1b5c(&local_48,(local_40 & 0x3fffff) >> 0x15);
            }
            else {
              local_48 = (undefined1 *)&local_58;
              iVar2 = FUN_00fb1850(&local_48,(local_40 & 0x3fffff) >> 0x15,1);
            }
          }
          else {
            local_48 = (undefined1 *)&local_58;
            iVar2 = FUN_00fb1470(&local_48,(local_40 & 0x3fffff) >> 0x15,uStack_3c >> 0x10);
          }
          if (iVar2 == 0) {
            uVar1 = (**(code **)(local_44 + 0xc))(local_48,&DAT_00414a81,2);
          }
          else {
            uVar1 = 1;
          }
        }
      }
      iVar8 = iVar8 + -8;
    } while (iVar8 != 0);
  }
LAB_0083597c:
  uVar3 = 1;
  if (uVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418ec5,1);
  }
  return uVar3;
}

