// FUN_00f89748 @ 00f89748 size=844 calls_out=6 calls_in=1
// strings: axum::extract::connect_info::ConnectInfo<core::net::socket_addr::SocketAddr>

void FUN_00f89748(undefined2 *param_1,int *param_2)

{
  int iVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  ushort unaff_r8;
  undefined4 uVar10;
  uint extraout_r12;
  uint uVar11;
  undefined8 uVar12;
  int local_78;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char *local_48;
  undefined4 local_44;
  char **local_40;
  undefined2 *local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[6]) {
  case '\0':
    iVar1 = *param_2;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[2] = iVar1;
    param_2[3] = iVar1;
    param_2[4] = param_2[1];
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1ab70);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1ab70);
  case '\x03':
    if ((char)param_2[5] != '\0') {
      if ((char)param_2[5] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20c10);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c10);
    }
    iVar1 = param_2[3];
  }
  puVar2 = (ushort *)FUN_011de390(*(undefined4 *)(iVar1 + 0x80));
  uVar11 = extraout_r12;
  if (puVar2 != (ushort *)0x0) {
    uVar11 = (uint)*puVar2;
  }
  if (puVar2 != (ushort *)0x0 && uVar11 != 2) {
    uVar3 = *(undefined4 *)(puVar2 + 2);
    puVar7 = *(undefined **)(puVar2 + 4);
    unaff_r8 = puVar2[1];
    local_60 = *(undefined4 *)(puVar2 + 6);
    uStack_5c = *(undefined4 *)(puVar2 + 8);
    uStack_58 = *(undefined4 *)(puVar2 + 10);
    uStack_54 = *(undefined4 *)(puVar2 + 0xc);
    uStack_50 = *(undefined4 *)(puVar2 + 0xe);
    *(undefined1 *)(param_2 + 5) = 1;
  }
  else {
    local_3c = &DAT_0132b6a0;
    local_40 = &local_48;
    local_44 = 0x4c;
    local_48 = "axum::extract::connect_info::ConnectInfo<core::net::socket_addr::SocketAddr>";
    FUN_00664898(&local_38,&DAT_00572ff4,&local_40);
    uVar3 = FUN_00b33ea0(&local_38);
    iVar1 = 1;
    *(undefined1 *)(param_2 + 5) = 1;
    uVar11 = 2;
    piVar4 = *(int **)(param_2[2] + 0x80);
    puVar7 = &DAT_01c100ac;
    if (piVar4 != (int *)0x0) {
      iVar1 = piVar4[3];
    }
    if (piVar4 != (int *)0x0 && iVar1 != 0) {
      iVar1 = *piVar4;
      uVar6 = piVar4[1];
      unaff_r8 = 0x79eb;
      local_78 = 0;
      uVar11 = uVar6 & 0xd1f879eb;
      while( true ) {
        uVar5 = *(uint *)(iVar1 + uVar11);
        uVar8 = (uVar5 & 0x80808080 ^ 0x80808080) & (uVar5 ^ 0x68686868) + 0xfefefeff;
        while (uVar8 != 0) {
          uVar9 = uVar11 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                          (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar6
          ;
          piVar4 = (int *)(iVar1 + -0x18 + uVar9 * -0x18);
          uVar8 = uVar8 - 1 & uVar8;
          if ((*piVar4 == 0x48293294 && piVar4[2] == -0x2e078615) &&
              (piVar4[1] == -0x421db133 && piVar4[3] == -0x172f52a8)) {
            iVar1 = iVar1 + uVar9 * -0x18;
            uVar12 = (**(code **)(*(int *)(iVar1 + -4) + 0x14))(*(undefined4 *)(iVar1 + -8));
            puVar2 = (ushort *)uVar12;
            (**(code **)((int)((ulonglong)uVar12 >> 0x20) + 0xc))(&local_38,puVar2);
            if ((local_38 != 0x48293294 || iStack_30 != -0x2e078615) ||
                (iStack_34 != -0x421db133 || iStack_2c != -0x172f52a8)) goto LAB_00f89a2c;
            puVar7 = *(undefined **)(puVar2 + 4);
            uVar10 = *(undefined4 *)(puVar2 + 2);
            unaff_r8 = puVar2[1];
            uVar11 = (uint)*puVar2;
            local_60 = *(undefined4 *)(puVar2 + 6);
            uStack_5c = *(undefined4 *)(puVar2 + 8);
            uStack_58 = *(undefined4 *)(puVar2 + 10);
            uStack_54 = *(undefined4 *)(puVar2 + 0xc);
            uStack_50 = *(undefined4 *)(puVar2 + 0xe);
            FUN_00f80320(uVar3,&DAT_01c100ac);
            uVar3 = uVar10;
            goto LAB_00f89a3c;
          }
        }
        if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
        local_78 = local_78 + 4;
        uVar11 = uVar11 + local_78 & uVar6;
      }
LAB_00f89a2c:
      uVar11 = 2;
      puVar7 = &DAT_01c100ac;
    }
  }
LAB_00f89a3c:
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined **)(param_1 + 4) = puVar7;
  param_1[1] = unaff_r8;
  *param_1 = (short)uVar11;
  *(undefined4 *)(param_1 + 6) = local_60;
  *(undefined4 *)(param_1 + 8) = uStack_5c;
  *(undefined4 *)(param_1 + 10) = uStack_58;
  *(undefined4 *)(param_1 + 0xc) = uStack_54;
  *(undefined4 *)(param_1 + 0xe) = uStack_50;
  *(undefined1 *)(param_2 + 6) = 1;
  return;
}

