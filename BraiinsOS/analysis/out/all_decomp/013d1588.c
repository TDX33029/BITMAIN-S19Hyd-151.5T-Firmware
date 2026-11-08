// FUN_013d1588 @ 013d1588 size=504 calls_out=3 calls_in=1
// strings: 

void FUN_013d1588(undefined1 *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  char local_49;
  int local_48 [3];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint local_28;
  
  iVar11 = *param_2;
  if (iVar11 == 0) {
LAB_013d16e0:
    *param_1 = 0;
    return;
  }
  iVar10 = param_2[1];
  iVar3 = iVar10;
  local_48[0] = iVar11;
  do {
    uVar4 = (uint)*(ushort *)(local_48[0] + 0x8a);
    iVar5 = uVar4 << 2;
    iVar2 = 0x17;
    do {
      local_48[2] = iVar2;
      if (iVar5 == 0) goto LAB_013d1604;
      uVar8 = *(uint *)(local_48[0] + local_48[2] * 4);
      iVar5 = iVar5 + -4;
      bVar12 = param_3 < uVar8;
      bVar1 = !bVar12 && param_3 != uVar8;
      iVar2 = local_48[2] + 1;
    } while ((char)(bVar1 - bVar12) == '\x01');
    if (bVar1 == bVar12) {
      local_48[2] = local_48[2] + -0x17;
      local_49 = '\0';
      if (iVar3 == 0) {
        local_48[1] = 0;
        FUN_0135d9c4(&local_3c,local_48,&local_49);
        uVar6 = local_34;
        uVar9 = local_38;
      }
      else {
        local_48[0] = *(int *)(local_48[0] + local_48[2] * 4 + 0x8c);
        if (iVar3 != 1) {
          iVar5 = 1;
          do {
            iVar5 = iVar5 + 1;
            local_48[0] = *(int *)(local_48[0] + (uint)*(ushort *)(local_48[0] + 0x8a) * 4 + 0x8c);
          } while (iVar3 != iVar5);
        }
        local_48[1] = 0;
        local_48[2] = *(ushort *)(local_48[0] + 0x8a) - 1;
        FUN_0135d9c4(&local_3c,local_48,&local_49);
        iVar3 = local_30;
        if (*(ushort *)(local_30 + 0x8a) <= local_28) {
          do {
            local_30 = *(int *)(iVar3 + 0x58);
            local_28 = (uint)*(ushort *)(iVar3 + 0x88);
            iVar3 = local_30;
          } while (*(ushort *)(local_30 + 0x8a) <= local_28);
        }
        *(undefined4 *)(local_30 + local_28 * 4 + 0x5c) = local_3c;
        puVar7 = (undefined4 *)(local_30 + local_28 * 8);
        uVar9 = *puVar7;
        uVar6 = puVar7[1];
        *puVar7 = local_38;
        puVar7[1] = local_34;
      }
      param_2[2] = param_2[2] + -1;
      if (local_49 == '\x01') {
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00410b17,0x21,&DAT_01892410);
        }
        iVar3 = *(int *)(iVar11 + 0x8c);
        *param_2 = iVar3;
        param_2[1] = iVar10 + -1;
        *(undefined4 *)(iVar3 + 0x58) = 0;
        thunk_FUN_016d3fb4(iVar11);
      }
      *(undefined4 *)(param_1 + 1) = uVar9;
      *(undefined4 *)(param_1 + 5) = uVar6;
      *param_1 = 1;
      return;
    }
    uVar4 = local_48[2] - 0x17;
LAB_013d1604:
    if (iVar3 == 0) goto LAB_013d16e0;
    iVar3 = iVar3 + -1;
    local_48[0] = *(int *)(local_48[0] + uVar4 * 4 + 0x8c);
  } while( true );
}

