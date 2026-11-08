// FUN_0181dbb8 @ 0181dbb8 size=2032 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_0181dbb8(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  
  if (param_1[0x21] < 1) {
    uVar4 = param_3 + 5;
joined_r0x0181e224:
    if (uVar4 < param_3 + 4U || param_2 == 0) {
      uVar4 = param_1[0x5af];
      if ((int)uVar4 < 0xe) {
        uVar2 = *(ushort *)(param_1 + 0x5ae) | (ushort)(param_4 + 2 << (uVar4 & 0xff));
        iVar1 = uVar4 + 3;
      }
      else {
        uVar12 = param_4 + 2U & 0xffff;
        uVar4 = (uint)*(ushort *)(param_1 + 0x5ae) | uVar12 << (uVar4 & 0xff);
        iVar1 = param_1[5];
        *(short *)(param_1 + 0x5ae) = (short)uVar4;
        param_1[5] = iVar1 + 1;
        *(char *)(param_1[2] + iVar1) = (char)uVar4;
        iVar1 = param_1[5];
        param_1[5] = iVar1 + 1;
        *(char *)(param_1[2] + iVar1) = (char)((uint)param_1[0x5ae] >> 8);
        iVar1 = param_1[0x5af] + -0xd;
        uVar2 = (ushort)((int)uVar12 >> (0x10U - param_1[0x5af] & 0xff));
      }
      param_1[0x5af] = iVar1;
      *(ushort *)(param_1 + 0x5ae) = uVar2;
      FUN_0181c4e4(param_1,&DAT_00453418,&DAT_004533a0);
      goto LAB_0181e168;
    }
  }
  else {
    if (*(int *)(*param_1 + 0x2c) == 2) {
      uVar4 = 0xf3ffc07f;
      piVar6 = param_1;
      do {
        if (((uVar4 & 1) != 0) && ((short)piVar6[0x25] != 0)) {
          uVar9 = 0;
          goto LAB_0181e0c4;
        }
        piVar6 = piVar6 + 1;
        uVar4 = uVar4 >> 1;
      } while (param_1 + 0x20 != piVar6);
      if ((((short)param_1[0x2e] == 0) && ((short)param_1[0x2f] == 0)) &&
         ((short)param_1[0x32] == 0)) {
        piVar6 = param_1 + 0x45;
        do {
          iVar1 = *piVar6;
          piVar6 = piVar6 + 1;
          if ((short)iVar1 != 0) goto LAB_0181e0c0;
          uVar9 = 0;
        } while (param_1 + 0x125 != piVar6);
      }
      else {
LAB_0181e0c0:
        uVar9 = 1;
      }
LAB_0181e0c4:
      *(undefined4 *)(*param_1 + 0x2c) = uVar9;
    }
    FUN_0181ca68(param_1,param_1 + 0x2c6);
    FUN_0181ca68(param_1,param_1 + 0x2c9);
    piVar6 = param_1 + 0x25;
    piVar10 = param_1 + 0x262;
    FUN_0181bb58(param_1,piVar6,param_1[0x2c7]);
    FUN_0181bb58(param_1,piVar10,param_1[0x2ca]);
    FUN_0181ca68(param_1,param_1 + 0x2cc);
    if (*(short *)((int)param_1 + 0xaba) == 0) {
      if (*(short *)((int)param_1 + 0xa82) != 0) {
        iVar1 = 0x11;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xab6) != 0) {
        iVar1 = 0x10;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xa86) != 0) {
        iVar1 = 0xf;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xab2) != 0) {
        iVar1 = 0xe;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xa8a) != 0) {
        iVar1 = 0xd;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xaae) != 0) {
        iVar1 = 0xc;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xa8e) != 0) {
        iVar1 = 0xb;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xaaa) != 0) {
        iVar1 = 10;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xa92) != 0) {
        iVar1 = 9;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xaa6) != 0) {
        iVar1 = 8;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xa96) != 0) {
        iVar1 = 7;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xaa2) != 0) {
        iVar1 = 6;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xa9a) != 0) {
        iVar1 = 5;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xa9e) != 0) {
        iVar1 = 4;
        goto LAB_0181e2a4;
      }
      if (*(short *)((int)param_1 + 0xa7e) != 0) {
        iVar1 = 3;
        goto LAB_0181e2a4;
      }
      iVar3 = 6;
      iVar1 = 2;
    }
    else {
      iVar1 = 0x12;
LAB_0181e2a4:
      iVar3 = iVar1 * 3;
    }
    iVar7 = param_1[0x5aa];
    param_1[0x5aa] = iVar3 + iVar7 + 0x11;
    uVar12 = iVar3 + iVar7 + 0x1bU >> 3;
    uVar4 = param_1[0x5ab] + 10U >> 3;
    if ((uVar4 <= uVar12) || (param_1[0x22] == 4)) goto joined_r0x0181e224;
    if (uVar12 < param_3 + 4U || param_2 == 0) {
      uVar4 = param_1[0x5af];
      if ((int)uVar4 < 0xe) {
        uVar12 = (uint)*(ushort *)(param_1 + 0x5ae) | param_4 + 4 << (uVar4 & 0xff);
        uVar4 = uVar4 + 3;
      }
      else {
        uVar12 = param_4 + 4U & 0xffff;
        uVar4 = (uint)*(ushort *)(param_1 + 0x5ae) | uVar12 << (uVar4 & 0xff);
        iVar3 = param_1[5];
        *(short *)(param_1 + 0x5ae) = (short)uVar4;
        param_1[5] = iVar3 + 1;
        *(char *)(param_1[2] + iVar3) = (char)uVar4;
        iVar3 = param_1[5];
        param_1[5] = iVar3 + 1;
        *(char *)(param_1[2] + iVar3) = (char)((uint)param_1[0x5ae] >> 8);
        uVar4 = param_1[0x5af] - 0xd;
        uVar12 = (int)uVar12 >> (0x10U - param_1[0x5af] & 0xff);
      }
      iVar3 = param_1[0x2c7];
      uVar11 = param_1[0x2ca];
      uVar8 = iVar3 - 0x100;
      param_1[0x5af] = uVar4;
      if ((int)uVar4 < 0xc) {
        uVar8 = uVar12 | uVar8 << (uVar4 & 0xff);
        uVar4 = uVar4 + 5;
      }
      else {
        uVar8 = uVar8 & 0xffff;
        iVar7 = param_1[5];
        uVar12 = uVar12 | uVar8 << (uVar4 & 0xff);
        *(short *)(param_1 + 0x5ae) = (short)uVar12;
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)uVar12;
        iVar7 = param_1[5];
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)((uint)param_1[0x5ae] >> 8);
        uVar4 = param_1[0x5af] - 0xb;
        uVar8 = (int)uVar8 >> (0x10U - param_1[0x5af] & 0xff);
      }
      param_1[0x5af] = uVar4;
      if ((int)uVar4 < 0xc) {
        uVar8 = uVar8 | uVar11 << (uVar4 & 0xff);
        uVar4 = uVar4 + 5;
      }
      else {
        iVar7 = param_1[5];
        uVar8 = uVar8 | (uVar11 & 0xffff) << (uVar4 & 0xff);
        *(short *)(param_1 + 0x5ae) = (short)uVar8;
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)uVar8;
        iVar7 = param_1[5];
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)((uint)param_1[0x5ae] >> 8);
        uVar4 = param_1[0x5af] - 0xb;
        uVar8 = (int)(uVar11 & 0xffff) >> (0x10U - param_1[0x5af] & 0xff);
      }
      param_1[0x5af] = uVar4;
      if ((int)uVar4 < 0xd) {
        uVar12 = uVar8 | iVar1 + -3 << (uVar4 & 0xff);
        uVar4 = uVar4 + 4;
      }
      else {
        iVar7 = param_1[5];
        uVar12 = iVar1 - 3U & 0xffff;
        uVar8 = uVar8 | uVar12 << (uVar4 & 0xff);
        *(short *)(param_1 + 0x5ae) = (short)uVar8;
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)uVar8;
        iVar7 = param_1[5];
        param_1[5] = iVar7 + 1;
        *(char *)(param_1[2] + iVar7) = (char)((uint)param_1[0x5ae] >> 8);
        uVar4 = param_1[0x5af] - 0xc;
        uVar12 = (int)uVar12 >> (0x10U - param_1[0x5af] & 0xff);
      }
      piVar13 = param_1 + 0x5ae;
      param_1[0x5af] = uVar4;
      pbVar5 = &UNK_00453898;
      uVar8 = 0x10;
      while( true ) {
        uVar8 = (uint)*(ushort *)((int)param_1 + (uVar8 + 0x29e) * 4 + 6);
        uVar12 = uVar12 | uVar8 << (uVar4 & 0xff);
        if ((int)uVar4 < 0xe) {
          uVar4 = uVar4 + 3;
          *(short *)piVar13 = (short)uVar12;
          param_1[0x5af] = uVar4;
        }
        else {
          iVar7 = param_1[5];
          *(short *)piVar13 = (short)uVar12;
          param_1[5] = iVar7 + 1;
          *(char *)(param_1[2] + iVar7) = (char)uVar12;
          iVar7 = param_1[5];
          param_1[5] = iVar7 + 1;
          *(char *)(param_1[2] + iVar7) = (char)((uint)*piVar13 >> 8);
          uVar4 = param_1[0x5af] - 0xd;
          uVar12 = (int)uVar8 >> (0x10U - param_1[0x5af] & 0xff);
          *(short *)piVar13 = (short)uVar12;
          param_1[0x5af] = uVar4;
        }
        if (&UNK_00453898 + iVar1 == pbVar5) break;
        pbVar5 = pbVar5 + 1;
        uVar8 = (uint)*pbVar5;
      }
      FUN_0181bda4(param_1,piVar6,iVar3);
      FUN_0181bda4(param_1,piVar10,uVar11);
      FUN_0181c4e4(param_1,piVar6,piVar10);
      goto LAB_0181e168;
    }
  }
  FUN_0181d7b0(param_1,param_2,param_3,param_4);
LAB_0181e168:
  piVar6 = param_1;
  do {
    *(undefined2 *)(piVar6 + 0x25) = 0;
    piVar6 = piVar6 + 1;
  } while (piVar6 != param_1 + 0x11e);
  piVar6 = param_1 + 0x262;
  do {
    piVar10 = piVar6 + 1;
    *(undefined2 *)piVar6 = 0;
    piVar6 = piVar10;
  } while (piVar10 != param_1 + 0x280);
  piVar6 = param_1 + 0x29f;
  do {
    piVar10 = piVar6 + 1;
    *(undefined2 *)piVar6 = 0;
    piVar6 = piVar10;
  } while (piVar10 != param_1 + 0x2b2);
  *(undefined2 *)(param_1 + 0x125) = 1;
  param_1[0x5aa] = 0;
  param_1[0x5ab] = 0;
  param_1[0x5ac] = 0;
  param_1[0x5a8] = 0;
  if (param_4 == 0) {
    return 0;
  }
  if (param_1[0x5af] < 9) {
    if (0 < param_1[0x5af]) {
      iVar1 = param_1[5];
      param_1[5] = iVar1 + 1;
      *(char *)(param_1[2] + iVar1) = (char)param_1[0x5ae];
    }
  }
  else {
    iVar1 = param_1[5];
    param_1[5] = iVar1 + 1;
    *(char *)(param_1[2] + iVar1) = (char)param_1[0x5ae];
    iVar1 = param_1[5];
    param_1[5] = iVar1 + 1;
    *(char *)(param_1[2] + iVar1) = (char)((uint)param_1[0x5ae] >> 8);
  }
  param_1[0x5af] = 0;
  *(undefined2 *)(param_1 + 0x5ae) = 0;
  return 0;
}

