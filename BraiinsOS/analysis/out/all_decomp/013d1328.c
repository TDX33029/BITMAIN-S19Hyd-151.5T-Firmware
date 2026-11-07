// FUN_013d1328 @ 013d1328 size=568 calls_out=3 calls_in=1
// strings: 

void FUN_013d1328(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  char local_65;
  int local_64 [3];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int *local_3c;
  uint local_34;
  
  iVar10 = *param_2;
  if (iVar10 == 0) {
LAB_013d1528:
    *param_1 = -0x80000000;
    return;
  }
  iVar2 = param_2[1];
  iVar3 = iVar2;
  local_58 = iVar10;
  do {
    uVar5 = (uint)*(ushort *)(local_58 + 0xb6);
    iVar7 = uVar5 << 2;
    iVar8 = 1;
    do {
      local_50 = iVar8;
      if (iVar7 == 0) goto LAB_013d13a4;
      uVar9 = *(uint *)(local_58 + local_50 * 4);
      iVar7 = iVar7 + -4;
      bVar11 = param_3 < uVar9;
      bVar1 = !bVar11 && param_3 != uVar9;
      iVar8 = local_50 + 1;
    } while ((char)(bVar1 - bVar11) == '\x01');
    if (bVar1 == bVar11) {
      local_50 = local_50 + -1;
      local_65 = '\0';
      if (iVar3 == 0) {
        local_54 = 0;
        FUN_0135ee3c(&local_4c,&local_58,&local_65);
      }
      else {
        local_64[0] = *(int *)(local_58 + local_50 * 4 + 0xb8);
        if (iVar3 != 1) {
          iVar7 = 1;
          do {
            iVar7 = iVar7 + 1;
            local_64[0] = *(int *)(local_64[0] + (uint)*(ushort *)(local_64[0] + 0xb6) * 4 + 0xb8);
          } while (iVar3 != iVar7);
        }
        local_64[1] = 0;
        local_64[2] = *(ushort *)(local_64[0] + 0xb6) - 1;
        FUN_0135ee3c(&local_4c,local_64,&local_65);
        local_58 = local_48;
        local_54 = local_44;
        local_50 = local_40;
        piVar6 = local_3c;
        if (*(ushort *)((int)local_3c + 0xb6) <= local_34) {
          do {
            local_3c = (int *)*piVar6;
            local_34 = (uint)*(ushort *)(piVar6 + 0x2d);
            piVar6 = local_3c;
          } while (*(ushort *)((int)local_3c + 0xb6) <= local_34);
        }
        iVar7 = local_3c[local_34 * 3 + 0xc];
        iVar8 = local_3c[local_34 * 3 + 0xd];
        iVar3 = local_3c[local_34 * 3 + 0xe];
        local_3c[local_34 + 1] = local_4c;
        local_3c[local_34 * 3 + 0xc] = local_48;
        local_3c[local_34 * 3 + 0xd] = local_44;
        local_3c[local_34 * 3 + 0xe] = local_40;
        local_48 = iVar7;
        local_44 = iVar8;
        local_40 = iVar3;
      }
      iVar8 = local_40;
      iVar7 = local_44;
      iVar3 = local_48;
      param_2[2] = param_2[2] + -1;
      if (local_65 == '\x01') {
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00410b17,0x21,&DAT_01892410);
        }
        puVar4 = *(undefined4 **)(iVar10 + 0xb8);
        *param_2 = (int)puVar4;
        param_2[1] = iVar2 + -1;
        *puVar4 = 0;
        thunk_FUN_016d3fb4(iVar10);
      }
      if (iVar3 != -0x80000000) {
        *param_1 = iVar3;
        param_1[1] = iVar7;
        param_1[2] = iVar8;
        return;
      }
      goto LAB_013d1528;
    }
    uVar5 = local_50 - 1;
LAB_013d13a4:
    if (iVar3 == 0) goto LAB_013d1528;
    iVar3 = iVar3 + -1;
    local_58 = *(int *)(local_58 + uVar5 * 4 + 0xb8);
  } while( true );
}

