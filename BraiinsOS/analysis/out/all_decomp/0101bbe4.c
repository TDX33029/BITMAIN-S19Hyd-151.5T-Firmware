// FUN_0101bbe4 @ 0101bbe4 size=1436 calls_out=7 calls_in=0
// strings: assertion failed: self.ids.insert(id; index).is_none()h2::proto::streams::prioritize/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/streams/prioritize.rsclear_queuestream.idPrioritize::queue_frametry_reclaim_framerequestedeffectivesztry_assign_capacityrecv_stream_window_updatestream.stateincassign_connection_capacitypoppedpop_frameupdating connection flowupdating stream flowsend_datah2::server/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rsflushread_preface

void FUN_0101bbe4(int *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint local_5c;
  int iStack_2c;
  int local_28;
  
  uVar5 = param_2[0x10];
  FUN_01029d10(param_2 + 0xc,uVar5,param_4);
  uVar11 = param_2[3] ^ 0x646f7261;
  uVar13 = param_2[2] ^ 0x6e646f6d;
  uVar3 = *param_2 ^ 0x70736575;
  uVar20 = uVar13 + uVar3;
  uVar8 = (uVar13 << 0xd | uVar11 >> 0x13) ^ uVar20;
  uVar18 = uVar11 + (param_2[1] ^ 0x736f6d65) + (uint)CARRY4(uVar13,uVar3);
  uVar14 = (uVar11 << 0xd | uVar13 >> 0x13) ^ uVar18;
  uVar12 = param_2[3] ^ 0x70656462;
  uVar3 = *param_2 ^ 0x6e657261;
  uVar15 = param_2[2] ^ param_3 ^ 0x79746573;
  uVar16 = uVar15 + uVar3;
  uVar11 = uVar12 + (param_2[1] ^ 0x6c796765) + (uint)CARRY4(uVar15,uVar3);
  uVar13 = uVar11 + uVar14 + (uint)CARRY4(uVar16,uVar8);
  uVar11 = (uVar12 << 0x10 | uVar15 >> 0x10) ^ uVar11;
  uVar10 = uVar13 ^ (uVar14 << 0x11 | uVar8 >> 0xf);
  uVar15 = (uVar15 << 0x10 | uVar12 >> 0x10) ^ uVar16;
  uVar12 = uVar11 + uVar20 + (uint)CARRY4(uVar15,uVar18);
  uVar14 = uVar16 + uVar8 ^ (uVar8 << 0x11 | uVar14 >> 0xf);
  uVar3 = uVar15 + uVar18 ^ param_3;
  uVar21 = uVar3 + uVar14;
  uVar22 = (uVar12 ^ 0x4000000) + uVar10 + (uint)CARRY4(uVar3,uVar14);
  uVar3 = uVar22 ^ (uVar10 << 0xd | uVar14 >> 0x13);
  uVar14 = uVar21 ^ (uVar14 << 0xd | uVar10 >> 0x13);
  uVar12 = (uVar11 << 0x15 | uVar15 >> 0xb) ^ uVar12;
  uVar10 = (uVar15 << 0x15 | uVar11 >> 0xb) ^ uVar15 + uVar18;
  uVar13 = uVar13 ^ 0xff;
  uVar18 = uVar10 + uVar13;
  uVar11 = uVar12 + uVar16 + uVar8 + (uint)CARRY4(uVar10,uVar13);
  uVar19 = uVar3 + uVar11 + (uint)CARRY4(uVar14,uVar18);
  uVar13 = uVar19 ^ (uVar3 << 0x11 | uVar14 >> 0xf);
  uVar15 = uVar14 + uVar18 ^ (uVar14 << 0x11 | uVar3 >> 0xf);
  uVar11 = (uVar12 << 0x10 | uVar10 >> 0x10) ^ uVar11;
  uVar10 = (uVar10 << 0x10 | uVar12 >> 0x10) ^ uVar18;
  uVar20 = uVar10 + uVar22;
  uVar16 = uVar11 + uVar21 + (uint)CARRY4(uVar10,uVar22);
  uVar21 = uVar13 + uVar16 + (uint)CARRY4(uVar15,uVar20);
  uVar3 = (uVar13 << 0xd | uVar15 >> 0x13) ^ uVar21;
  uVar8 = (uVar15 << 0xd | uVar13 >> 0x13) ^ uVar15 + uVar20;
  uVar16 = (uVar11 << 0x15 | uVar10 >> 0xb) ^ uVar16;
  uVar11 = (uVar10 << 0x15 | uVar11 >> 0xb) ^ uVar20;
  uVar12 = uVar11 + uVar19;
  uVar13 = uVar16 + uVar14 + uVar18 + (uint)CARRY4(uVar11,uVar19);
  uVar10 = (uVar16 << 0x10 | uVar11 >> 0x10) ^ uVar13;
  uVar11 = (uVar11 << 0x10 | uVar16 >> 0x10) ^ uVar12;
  uVar18 = uVar3 + uVar13 + (uint)CARRY4(uVar8,uVar12);
  uVar16 = uVar11 + uVar21;
  uVar15 = uVar10 + uVar15 + uVar20 + (uint)CARRY4(uVar11,uVar21);
  uVar13 = (uVar11 << 0x15 | uVar10 >> 0xb) ^ uVar16;
  uVar20 = (uVar3 << 0x11 | uVar8 >> 0xf) ^ uVar18;
  uVar14 = (uVar10 << 0x15 | uVar11 >> 0xb) ^ uVar15;
  uVar10 = uVar13 + uVar18;
  uVar3 = (uVar8 << 0x11 | uVar3 >> 0xf) ^ uVar8 + uVar12;
  uVar8 = uVar14 + uVar8 + uVar12 + (uint)CARRY4(uVar13,uVar18);
  uVar11 = (uVar3 << 0xd | uVar20 >> 0x13) ^ uVar3 + uVar16;
  uVar3 = (uVar20 << 0xd | uVar3 >> 0x13) ^ uVar20 + uVar15 + (uint)CARRY4(uVar3,uVar16);
  uVar12 = param_2[5];
  uVar11 = ((uVar10 ^ uVar14 >> 0x10) << 0x15 | ((uVar14 << 0x10 | uVar13 >> 0x10) ^ uVar8) >> 0xb)
           ^ (uVar11 << 0x11 | uVar3 >> 0xf) ^ uVar3 + uVar8 + (uint)CARRY4(uVar11,uVar10) ^
           uVar11 + uVar10;
  uVar3 = param_2[6];
  if (param_2[9] == 0) {
    FUN_0102d12c(param_2 + 7,uVar12,uVar3);
  }
  puVar4 = param_2 + 4;
  puVar9 = (uint *)param_2[7];
  uVar8 = param_2[8];
  iVar17 = 0;
  bVar2 = false;
  uVar13 = uVar11;
  do {
    uVar13 = uVar8 & uVar13;
    uVar14 = *(uint *)((int)puVar9 + uVar13);
    uVar10 = uVar14 ^ (uVar11 >> 0x19) * 0x1010101;
    uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
    while (uVar10 != 0) {
      uVar15 = puVar9[-1 - (uVar13 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                                    (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18)
                                     >> 3) & uVar8)];
      if (uVar3 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar15,uVar3,&DAT_018adbc8);
      }
      uVar10 = uVar10 - 1 & uVar10;
      if (param_3 == *(uint *)(uVar12 + uVar15 * 0xc + 4)) {
        if (param_2[6] <= uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar15,param_2[6],&DAT_01882cc0);
        }
        iVar6 = param_2[5] + uVar15 * 0xc;
        iVar17 = *(int *)(iVar6 + 8);
        *(uint *)(iVar6 + 8) = uVar5;
        local_28 = 1;
        piVar7 = &iStack_2c;
        goto LAB_0101bfe0;
      }
    }
    uVar10 = uVar14 & 0x80808080;
    if (bVar2) {
LAB_0101bf78:
      if ((uVar10 & uVar14 << 1) != 0) break;
      bVar2 = true;
    }
    else {
      if (uVar10 != 0) {
        local_5c = uVar13 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                   uVar8;
        goto LAB_0101bf78;
      }
      bVar2 = false;
    }
    iVar17 = iVar17 + 4;
    uVar13 = iVar17 + uVar13;
  } while( true );
  uVar3 = (uint)*(char *)((int)puVar9 + local_5c);
  if (-1 < (int)uVar3) {
    uVar3 = *puVar9 & 0x80808080;
    uVar13 = LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
                     uVar3 >> 0x18);
    uVar3 = (uint)*(byte *)((int)puVar9 + (uVar13 >> 3));
    local_5c = uVar13 >> 3;
  }
  uVar13 = param_2[6];
  bVar1 = (byte)(uVar11 >> 0x19);
  *(byte *)((int)puVar9 + local_5c) = bVar1;
  *(byte *)((int)puVar9 + (local_5c - 4 & uVar8) + 4) = bVar1;
  uVar8 = param_2[9];
  uVar10 = param_2[10];
  puVar9[-1 - local_5c] = uVar13;
  uVar13 = param_2[6];
  param_2[9] = uVar8 - (uVar3 & 1);
  param_2[10] = uVar10 + 1;
  if (uVar13 == param_2[4]) {
    uVar3 = 0xaaaaaaa;
    if (param_2[9] + param_2[10] < 0xaaaaaaa) {
      uVar3 = param_2[9] + param_2[10];
    }
    if (1 < uVar3 - uVar13) {
      iVar17 = FUN_0102cf58(puVar4);
      uVar13 = param_2[6];
      if (iVar17 == -0x7fffffff) goto LAB_0101c0e8;
    }
    FUN_0102ced8(puVar4,uVar13,1,0xc);
    uVar13 = param_2[6];
  }
LAB_0101c0e8:
  if (uVar13 == *puVar4) {
    FUN_0102cd54(puVar4);
  }
  puVar4 = (uint *)(param_2[5] + uVar13 * 0xc);
  *puVar4 = uVar11;
  puVar4[1] = param_3;
  puVar4[2] = uVar5;
  piVar7 = &local_28;
  param_2[6] = uVar13 + 1;
  iVar17 = 0;
LAB_0101bfe0:
  *piVar7 = iVar17;
  if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.ids.insert(id, index).is_none()h2::proto::streams::prioritize/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/streams/prioritize.rsclear_queuestream.idPrioritize::queue_frametry_reclaim_framerequestedeffectivesztry_assign_capacityrecv_stream_window_updatestream.stateincassign_connection_capacitypoppedpop_frameupdating connection flowupdating stream flowsend_datah2::server/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rsflushread_preface"
                 ,0x36,&DAT_018825b4);
  }
  *param_1 = (int)param_2;
  param_1[1] = uVar5;
  param_1[2] = param_3;
  return;
}

