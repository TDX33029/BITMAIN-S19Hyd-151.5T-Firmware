// FUN_015b0cec @ 015b0cec size=8736 calls_out=5 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x015b2ea8) */

void FUN_015b0cec(undefined4 *param_1,int param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r4;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined *puVar20;
  int iVar21;
  char *pcVar22;
  undefined *puVar23;
  uint *puVar24;
  undefined4 *local_3c;
  uint local_38;
  undefined4 *local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) {
LAB_015b3060:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x78);
    }
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x1020000;
    uVar7 = 2;
    goto LAB_015b1c34;
  case 1:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    puVar5[1] = 0x3020001;
    *puVar5 = 0x1020000;
    uVar7 = 4;
LAB_015b1c34:
    uVar18 = 0;
    puVar20 = (undefined *)0x1;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = uVar7;
    local_38 = 1;
    break;
  case 2:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    puVar20 = &DAT_0040f71d;
    *(undefined2 *)(puVar5 + 1) = 0x302;
    *puVar5 = 0x1020000;
    *local_3c = 10;
    uVar18 = 1;
    local_3c[1] = puVar5;
    local_3c[2] = 3;
    local_38 = 1;
    break;
  case 3:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2fb0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fb0;
    *puVar5 = 0x20000;
    local_3c[4] = puVar5;
    local_3c[3] = 10;
    local_3c[5] = 2;
    local_38 = 2;
    goto LAB_015b2a68;
  case 4:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2f68:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x1020000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f68;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 2;
    goto LAB_015b15fc;
  case 5:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2fd4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fd4;
    puVar5[1] = 0x1020001;
    *puVar5 = 0x20000;
    local_38 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 4;
    goto LAB_015b2a68;
  case 6:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2fec:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fec;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 2;
    local_28 = 2;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fec;
    *puVar5 = 0x2020001;
    local_3c[6] = 10;
    local_3c[7] = puVar5;
    local_3c[8] = 2;
    goto LAB_015b283c;
  case 7:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2fbc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x1020000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fbc;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 2;
    local_28 = 2;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fbc;
    *puVar5 = 0x2020001;
    local_3c[6] = 10;
    local_3c[7] = puVar5;
    local_3c[8] = 2;
    goto LAB_015b2930;
  case 8:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b3004:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3004;
    puVar5[1] = 0x1020001;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[5] = 4;
    local_3c[4] = puVar5;
    local_28 = 2;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3004;
    *puVar5 = 0x2020001;
    local_3c[6] = 10;
    local_3c[7] = puVar5;
    local_3c[8] = 2;
    goto LAB_015b283c;
  case 9:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2f80:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f80;
    *(undefined2 *)(puVar5 + 1) = 0x202;
    *puVar5 = 0x20000;
    uVar18 = 3;
    goto LAB_015b175c;
  case 10:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2ff8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined2 *)(puVar5 + 1) = 0x302;
    *puVar5 = 0x1020000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 3;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2ff8;
    *(undefined2 *)(puVar5 + 1) = 0x202;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    goto LAB_015b2d00;
  case 0xb:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2f5c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f5c;
    *(undefined2 *)(puVar5 + 2) = 0x102;
    puVar5[1] = 0x10202;
    *puVar5 = 0x20000;
    uVar18 = 5;
LAB_015b175c:
    local_38 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = uVar18;
LAB_015b2c48:
    puVar20 = &DAT_0040f71d;
    uVar18 = 1;
    uVar7 = 0;
    puVar23 = (undefined *)0x1;
    goto LAB_015b2d18;
  case 0xc:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2f74:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x10000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f74;
    *(undefined2 *)(puVar5 + 1) = 0x202;
    *puVar5 = 0x20000;
    uVar18 = 3;
    goto LAB_015b16a8;
  case 0xd:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2fe0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    puVar5[1] = 0x3020001;
    *puVar5 = 0x1020000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 4;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fe0;
    uVar17 = 0x202;
    goto LAB_015b2188;
  case 0xe:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2f44:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x10000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f44;
    *(undefined2 *)(puVar5 + 2) = 0x102;
    puVar5[1] = 0x10202;
    *puVar5 = 0x20000;
    uVar18 = 5;
LAB_015b16a8:
    local_38 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = uVar18;
    goto LAB_015b2a68;
  case 0xf:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2fa4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fa4;
    uVar17 = 0x102;
LAB_015b2188:
    *(undefined2 *)(puVar5 + 1) = uVar17;
    *puVar5 = 0x20000;
    local_38 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
LAB_015b2748:
    puVar20 = (undefined *)0x1;
    uVar18 = 0;
    break;
  case 0x10:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2f38:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f38;
    *(undefined2 *)(puVar5 + 1) = 1;
    *puVar5 = 0x20000;
    local_38 = 3;
    local_28 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2f38;
    *puVar6 = 0x102;
    local_3c[6] = 10;
    local_3c[7] = puVar6;
    local_3c[8] = 1;
    goto LAB_015b2a68;
  case 0x11:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b1e28:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b1e28;
    *puVar5 = 0x20000;
    local_3c[5] = 2;
    local_28 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b1e28;
    *puVar6 = 1;
    local_3c[6] = 10;
    local_3c[7] = puVar6;
    local_3c[8] = 1;
    local_28 = 3;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b1e28;
    goto LAB_015b2a44;
  case 0x12:
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_2c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2ec0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x1020000;
    *local_2c = 10;
    local_2c[1] = puVar5;
    local_2c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2ec0;
    *puVar5 = 0x20000;
    local_2c[3] = 10;
    local_2c[4] = puVar5;
    local_2c[5] = 2;
    local_28 = 2;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2ec0;
    *puVar6 = 1;
    local_2c[6] = 10;
    local_2c[7] = puVar6;
    local_2c[8] = 1;
    local_28 = 3;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2ec0;
    goto LAB_015b2378;
  case 0x13:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b3034:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3034;
    *(undefined2 *)(puVar5 + 1) = 0x102;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    local_28 = 2;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3034;
    *puVar5 = 0x2020001;
    local_3c[6] = 10;
    local_3c[7] = puVar5;
    local_3c[8] = 2;
LAB_015b2930:
    local_38 = 3;
    puVar20 = (undefined *)0x1;
    uVar18 = 0;
    break;
  case 0x14:
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_2c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b1f24:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_2c = 10;
    local_2c[1] = puVar6;
    local_2c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b1f24;
    *(undefined2 *)(puVar5 + 1) = 0x102;
    *puVar5 = 0x20000;
    local_28 = 2;
    local_2c[3] = 10;
    local_2c[4] = puVar5;
    local_2c[5] = 3;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b1f24;
    *puVar6 = 1;
    local_2c[6] = 10;
    local_2c[7] = puVar6;
    local_2c[8] = 1;
    local_28 = 3;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b1f24;
LAB_015b2378:
    *puVar6 = 0x202;
    local_38 = 4;
    local_2c[9] = 10;
    local_2c[10] = puVar6;
    local_2c[0xb] = 1;
    local_3c = local_2c;
    goto LAB_015b2748;
  case 0x15:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2eb4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2eb4;
    puVar5[1] = 0x1020001;
    *puVar5 = 0x20000;
    local_3c[5] = 4;
    local_28 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2eb4;
    *puVar6 = 1;
    local_3c[6] = 10;
    local_3c[7] = puVar6;
    local_3c[8] = 1;
    local_28 = 3;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2eb4;
    goto LAB_015b2a44;
  case 0x16:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b3028:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3028;
    *(undefined2 *)(puVar5 + 1) = 1;
    *puVar5 = 0x20000;
    local_28 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3028;
    *(undefined2 *)(puVar5 + 1) = 0x202;
    *puVar5 = 0x10102;
    local_3c[6] = 10;
    local_3c[7] = puVar5;
    local_3c[8] = 3;
    goto LAB_015b283c;
  case 0x17:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2ecc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2ecc;
    *(undefined2 *)(puVar5 + 1) = 1;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    local_28 = 2;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2ecc;
    *puVar5 = 0x10102;
    local_3c[6] = 10;
    local_3c[7] = puVar5;
    local_3c[8] = 2;
    local_28 = 3;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2ecc;
LAB_015b2a44:
    *puVar6 = 0x202;
    local_38 = 4;
    local_3c[9] = 10;
    local_3c[10] = puVar6;
    local_3c[0xb] = 1;
    goto LAB_015b2a68;
  case 0x18:
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_2c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2f98:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_2c = 10;
    local_2c[1] = puVar6;
    local_2c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f98;
    *puVar5 = 0x20000;
    local_2c[5] = 2;
    local_28 = 2;
    local_2c[3] = 10;
    local_2c[4] = puVar5;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2f98;
    goto LAB_015b2b34;
  case 0x19:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2f8c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x1020000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f8c;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 2;
    local_28 = 2;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2f8c;
    *puVar6 = 0x202;
    local_3c[6] = 10;
    local_3c[7] = puVar6;
    local_3c[8] = 1;
    local_38 = 3;
    goto LAB_015b2d0c;
  case 0x1a:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b3058:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3058;
    puVar5[1] = 0x1020202;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 4;
LAB_015b2d00:
    local_38 = 2;
LAB_015b2d0c:
    puVar20 = &DAT_0040f71d;
    uVar18 = 1;
    break;
  case 0x1b:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b2f20:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f20;
    *(undefined2 *)(puVar5 + 1) = 0x102;
    *puVar5 = 0x20000;
    local_28 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2f20;
    puVar20 = &DAT_0040f71d;
    *puVar6 = 0x202;
    uVar18 = 1;
    local_3c[6] = 10;
    local_3c[7] = puVar6;
    local_3c[8] = 1;
    local_38 = 3;
    break;
  case 0x1c:
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_2c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b3040:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_2c = 10;
    local_2c[1] = puVar6;
    local_2c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3040;
    puVar5[1] = 0x1020001;
    *puVar5 = 0x20000;
    local_2c[5] = 4;
    local_28 = 2;
    local_2c[3] = 10;
    local_2c[4] = puVar5;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b3040;
LAB_015b2b34:
    uVar17 = 0x202;
LAB_015b2c28:
    *puVar6 = uVar17;
    local_2c[6] = 10;
    local_38 = 3;
    local_2c[7] = puVar6;
    local_2c[8] = 1;
    local_3c = local_2c;
    goto LAB_015b2c48;
  case 0x1d:
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_2c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b304c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_2c = 10;
    local_2c[1] = puVar6;
    local_2c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b304c;
    puVar5[1] = 0x10202;
    *puVar5 = 0x20000;
    local_2c[5] = 4;
    local_28 = 2;
    local_2c[3] = 10;
    local_2c[4] = puVar5;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b304c;
    uVar17 = 0x102;
    goto LAB_015b2c28;
  case 0x1e:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) {
LAB_015b3010:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar6 = 0;
    *local_3c = 10;
    local_3c[1] = puVar6;
    local_3c[2] = 1;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3010;
    *(undefined2 *)(puVar5 + 1) = 1;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    local_28 = 2;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b3010;
    *puVar5 = 0x1020202;
    puVar20 = &DAT_0040f71d;
    local_3c[6] = 10;
    local_3c[7] = puVar5;
    local_3c[8] = 2;
    uVar18 = 1;
    local_38 = 3;
    uVar7 = 0;
    puVar23 = (undefined *)0x1;
    goto LAB_015b2d18;
  case 0x1f:
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_2c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2fc8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x10000;
    *local_2c = 10;
    local_2c[1] = puVar5;
    local_2c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2fc8;
    *puVar5 = 0x20000;
    local_2c[3] = 10;
    local_2c[4] = puVar5;
    local_2c[5] = 2;
    local_28 = 2;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2fc8;
    goto LAB_015b1d08;
  case 0x20:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b301c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined2 *)(puVar5 + 1) = 1;
    *puVar5 = 0x1020000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 3;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b301c;
    *puVar5 = 0x20000;
    local_3c[5] = 2;
    local_28 = 2;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b301c;
    *puVar6 = 0x202;
    local_3c[6] = 10;
    local_3c[7] = puVar6;
    local_3c[8] = 1;
    local_38 = 3;
    goto LAB_015b2748;
  case 0x21:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2f50:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x10000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f50;
    puVar5[1] = 0x1020202;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 4;
LAB_015b15fc:
    puVar20 = (undefined *)0x1;
    local_38 = 2;
    uVar18 = 0;
    break;
  case 0x22:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2f2c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x10000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f2c;
    *(undefined2 *)(puVar5 + 1) = 0x102;
    *puVar5 = 0x20000;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    local_28 = 2;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2f2c;
    puVar20 = (undefined *)0x1;
    *puVar6 = 0x202;
    local_3c[6] = 10;
    local_3c[7] = puVar6;
    local_3c[8] = 1;
    uVar18 = 0;
    local_38 = 3;
    break;
  case 0x23:
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_2c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2f08:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x10000;
    *local_2c = 10;
    local_2c[1] = puVar5;
    local_2c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f08;
    puVar5[1] = 0x1020001;
    *puVar5 = 0x20000;
    local_2c[5] = 4;
    local_2c[3] = 10;
    local_2c[4] = puVar5;
    local_28 = 2;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2f08;
LAB_015b1d08:
    uVar17 = 0x202;
LAB_015b1d10:
    *puVar6 = uVar17;
    local_2c[6] = 10;
    local_38 = 3;
    local_3c = local_2c;
    local_2c[7] = puVar6;
    local_2c[8] = 1;
    goto LAB_015b2a68;
  case 0x24:
    local_2c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_2c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2f14:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x10000;
    *local_2c = 10;
    local_2c[1] = puVar5;
    local_2c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2f14;
    puVar5[1] = 0x10202;
    *puVar5 = 0x20000;
    local_2c[5] = 4;
    local_2c[3] = 10;
    local_2c[4] = puVar5;
    local_28 = 2;
    puVar6 = (undefined2 *)thunk_FUN_016d4a50(0x14);
    if (puVar6 == (undefined2 *)0x0) goto LAB_015b2f14;
    uVar17 = 0x102;
    goto LAB_015b1d10;
  case 0x25:
    local_3c = (undefined4 *)thunk_FUN_016d4a50(0x78);
    if (local_3c == (undefined4 *)0x0) goto LAB_015b3060;
    local_28 = 0;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) {
LAB_015b2efc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *puVar5 = 0x10000;
    *local_3c = 10;
    local_3c[1] = puVar5;
    local_3c[2] = 2;
    local_28 = 1;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2efc;
    *puVar5 = 0x20000;
    *(undefined2 *)(puVar5 + 1) = 1;
    local_3c[3] = 10;
    local_3c[4] = puVar5;
    local_3c[5] = 3;
    local_28 = 2;
    puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
    if (puVar5 == (undefined4 *)0x0) goto LAB_015b2efc;
    *puVar5 = 0x1020202;
    local_3c[6] = 10;
    local_3c[7] = puVar5;
    local_3c[8] = 2;
LAB_015b283c:
    local_38 = 3;
LAB_015b2a68:
    puVar20 = (undefined *)0x1;
    uVar18 = 0;
    puVar23 = (undefined *)0x1;
    uVar7 = 0;
    goto LAB_015b2d18;
  }
  puVar23 = &DAT_0040f71d;
  uVar7 = 1;
LAB_015b2d18:
  pcVar11 = *(char **)(param_2 + 4);
  if (*(int *)(param_2 + 8) != 0) {
    pcVar22 = pcVar11 + *(int *)(param_2 + 8) * 2;
    do {
      if (*pcVar11 != '\0') {
        uVar4 = 7;
LAB_015b2e40:
        *(undefined1 *)((int)param_1 + 5) = uVar4;
        puVar5 = local_3c + 1;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 0x80000000;
        for (; local_38 != 0; local_38 = local_38 - 1) {
          if (puVar5[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar5);
          }
          puVar5 = puVar5 + 3;
        }
        if (local_3c == (undefined4 *)0x0) {
          return;
        }
        iVar21 = FUN_016d3bc8();
        uVar8 = *(byte *)((int)local_3c + -3) & 0x1f;
        if (((*(byte *)(iVar21 + 0x14) & 0x1f) != 0) ||
           (uVar19 = *(uint *)(iVar21 + 0x14) & 0xfffff000, iVar9 = uVar19 - 0x10, uVar19 == 0)) {
          iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar21 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar19 = (uint)(*(byte *)((int)local_3c + -3) >> 5);
        iVar16 = *(int *)(iVar21 + 8) + 0x10;
        iVar13 = iVar9 * uVar8 + iVar9 + -4;
        iVar9 = iVar16 + iVar13;
        if (4 < uVar19) {
          if (uVar19 != 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar2)();
          }
          uVar19 = *(uint *)(iVar9 + -4);
          if (uVar19 < 5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar2)();
          }
          if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar2)();
          }
        }
        if ((uint)(iVar9 - (int)local_3c) < uVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar2)();
        }
        if (*(char *)(iVar9 - uVar19) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar2)();
        }
        if (*(char *)(iVar16 + iVar13) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar2)();
        }
        bVar1 = *(byte *)(iVar21 + 0x14);
        uVar19 = 1 << uVar8;
        *(undefined1 *)((int)local_3c + -3) = 0xff;
        *(undefined2 *)((int)local_3c + -2) = 0;
        do {
          uVar14 = *(uint *)(iVar21 + 0x10);
          uVar10 = *(uint *)(iVar21 + 0xc) | uVar14;
          if ((uVar19 & uVar10) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar2)();
          }
          if ((uVar14 == 0) || (uVar10 + uVar19 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar21,uVar8);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar5 = (undefined4 *)FUN_016d2bc8();
            uVar18 = *puVar5;
            FUN_016d6ac4(local_28,unaff_r4);
            *puVar5 = uVar18;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar21 + 0x10) = uVar19 + uVar14;
            return;
          }
          puVar24 = (uint *)(iVar21 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar24);
            uVar10 = *puVar24;
            if (uVar14 != uVar10) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar24);
          } while (!bVar3);
          *puVar24 = uVar19 + uVar14;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar14 == uVar10) {
            return;
          }
        } while( true );
      }
      bVar1 = pcVar11[1];
      uVar19 = (uint)bVar1;
      uVar8 = uVar19 - 1;
      if (uVar19 == 0) {
        uVar8 = 0;
      }
      if (local_38 <= uVar8) {
        uVar4 = 6;
        goto LAB_015b2e40;
      }
      piVar12 = local_3c + uVar8 * 3;
      iVar21 = piVar12[2];
      if (uVar19 == 0) {
        if (iVar21 == *piVar12) {
          FUN_015bb868(piVar12);
        }
        puVar15 = (undefined1 *)piVar12[1];
        if (iVar21 != 0) {
          FUN_016dd52c(puVar15 + 2,puVar15,iVar21 << 1);
        }
        *puVar15 = 3;
      }
      else {
        if (iVar21 == *piVar12) {
          FUN_015bb868(piVar12);
        }
        puVar15 = (undefined1 *)(piVar12[1] + iVar21 * 2);
        *puVar15 = 3;
      }
      pcVar11 = pcVar11 + 2;
      puVar15[1] = bVar1;
      piVar12[2] = iVar21 + 1;
    } while (pcVar11 != pcVar22);
  }
  *param_1 = 10;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  param_1[3] = puVar20;
  param_1[4] = uVar18;
  param_1[5] = puVar23;
  param_1[6] = uVar7;
  return;
}

