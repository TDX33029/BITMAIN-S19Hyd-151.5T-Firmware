// FUN_016330cc @ 016330cc size=980 calls_out=10 calls_in=3
// strings: netlink_packet_route::link::link_layer_type | netlink_packet_route::link::link_layer_type | failed to parse link message NLAs

void FUN_016330cc(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ushort uVar10;
  undefined1 *puVar11;
  uint uVar12;
  code *pcVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  int local_214;
  ushort local_204 [2];
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  code *local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ushort *local_1d0;
  code *local_1cc;
  char *local_1c8;
  undefined4 local_1c4;
  undefined1 auStack_1c0 [192];
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  code *local_f4;
  char *local_f0;
  undefined4 local_ec;
  undefined *local_e8 [49];
  
  piVar9 = (int *)*param_2;
  uVar14 = piVar9[1];
  if (uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d06038);
  }
  puVar11 = (undefined1 *)*piVar9;
  uVar16 = FUN_01627690(*puVar11);
  if (uVar14 < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(2,4,uVar14,&DAT_01d06038);
  }
  local_204[0] = *(ushort *)(puVar11 + 2);
  uVar12 = (uint)local_204[0];
  uVar10 = local_204[0];
  if (uVar12 < 0x300) {
    switch(uVar12) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xf:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x1b:
    case 0x20:
      goto switchD_01633214_caseD_0;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x19:
    case 0x1a:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
      break;
    default:
      if (((uVar12 - 0x100 < 0x19) && ((1 << (uVar12 - 0x100 & 0xff) & 0x101c11fU) != 0)) ||
         ((uVar12 - 0x200 < 8 && ((1 << (uVar12 - 0x200 & 0xff) & 0xf3U) != 0))))
      goto switchD_01633214_caseD_0;
    }
  }
  else if ((uVar12 - 0x300 < 0x14) ||
          (((uVar12 - 800 < 0x1b && ((1 << (uVar12 - 800 & 0xff) & 0x7f0003fU) != 0)) ||
           (uVar12 - 0xfffe < 2)))) goto switchD_01633214_caseD_0;
  uVar10 = 0xffff;
  if (1 < DAT_01d51b00) {
    local_1d0 = local_204;
    local_1cc = FUN_012fcf18;
    local_ec = 0x2b;
    local_f4 = (code *)0x2b;
    local_f0 = "netlink_packet_route::link::link_layer_type";
    local_f8 = (code *)0x4bb69e;
    local_e8[0] = &DAT_01d05fd0;
    FUN_0161d588(&DAT_0058d310,&local_1d0,2,&local_f8);
    uVar14 = piVar9[1];
  }
switchD_01633214_caseD_0:
  if (uVar14 < 8) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(4,8,uVar14,&DAT_01d06038);
  }
  if (uVar14 < 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0xc,0x10,uVar14,&DAT_01d06038);
  }
  local_1e8 = *piVar9;
  iVar15 = 0;
  iVar6 = *(int *)(local_1e8 + 4);
  iVar7 = *(int *)(local_1e8 + 8);
  iVar8 = *(int *)(local_1e8 + 0xc);
  local_1e8 = local_1e8 + 0x10;
  local_214 = 8;
  local_1e4 = uVar14 - 0x10;
  local_1ec = 0;
  local_1f0 = 8;
  local_1f4 = 0;
  local_1e0 = 0;
  while( true ) {
    iVar2 = local_1ec;
    FUN_0162385c(&local_1dc,&local_1e8);
    if (local_1dc == (code *)0x80000001) {
      *param_1 = local_1f4;
      param_1[1] = local_214;
      param_1[2] = iVar2;
      *(ushort *)((int)param_1 + 0x1a) = uVar10;
      *(char *)((int)param_1 + 0x19) = (char)((ulonglong)uVar16 >> 0x20);
      *(char *)(param_1 + 6) = (char)uVar16;
      param_1[3] = iVar6;
      param_1[4] = iVar7;
      param_1[5] = iVar8;
      return;
    }
    pcVar13 = local_1dc;
    if (local_1dc != (code *)0x80000000) break;
    local_fc = local_1d4;
    local_100 = local_1d8;
    FUN_0163d274(&local_1d0,&local_100,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar5 = local_1c4;
    pcVar4 = local_1c8;
    pcVar13 = local_1cc;
    cVar3 = (char)local_1d0;
    if ((char)local_1d0 == '6') {
      break;
    }
    uVar1 = *(undefined2 *)((uint)&local_1d0 | 1);
    *(undefined1 *)((undefined2 *)((uint)&local_f8 | 1) + 1) =
         *(undefined1 *)((undefined2 *)((uint)&local_1d0 | 1) + 1);
    *(undefined2 *)((uint)&local_f8 | 1) = uVar1;
    FUN_01bed4e2(local_e8,auStack_1c0,0xc0);
    local_f8 = (code *)CONCAT31(local_f8._1_3_,cVar3);
    local_f4 = pcVar13;
    local_f0 = pcVar4;
    local_ec = uVar5;
    if (iVar2 == local_1f4) {
      FUN_0161d6f4(&local_1f4);
      local_214 = local_1f0;
    }
    FUN_01bed4e2(local_214 + iVar15,&local_f8,0xd0);
    local_1ec = iVar2 + 1;
    iVar15 = iVar15 + 0xd0;
  }
  FUN_01630f48(&local_1f4);
  local_f8 = pcVar13;
  FUN_016403ac(&local_200,&local_f8,"failed to parse link message NLAs",0x21);
  param_1[1] = local_200;
  param_1[2] = local_1fc;
  param_1[3] = local_1f8;
  *param_1 = -0x80000000;
  return;
}

