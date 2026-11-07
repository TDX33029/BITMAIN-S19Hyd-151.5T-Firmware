// FUN_0002a998 @ 0002a998  size=1840  callers=0
// program: bmminer


undefined4 FUN_0002a998(void)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int param5;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  uint in_fpscr;
  float fVar18;
  double dVar19;
  double dVar20;
  int local_2a90;
  int *local_2a84;
  int local_2a5c [15];
  int local_2a20 [60];
  int local_2930 [60];
  char local_2840 [16];
  uint local_2830;
  undefined2 local_282c;
  int aiStack_2040 [1024];
  int local_1040;
  char acStack_103c [12];
  undefined2 uStack_1030;
  undefined1 local_102e;
  
  prctl(0xf,"tuning_freq",0,0,0);
  while (iVar5 = FUN_00036360(), iVar5 != 2) {
    FUN_00034a5c(1000);
  }
  while( true ) {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000892c8);
    iVar5 = FUN_0001cf54();
    uVar4 = DAT_00087b88;
    if (iVar5 == DAT_0048d3d4) break;
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000892c8);
    FUN_00034a5c(1000);
  }
  DAT_00087b88 = 0;
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000892c8);
  FUN_00034a5c(60000);
  if (3 < DAT_00087bbc) {
    local_1040._0_1_ = 't';
    local_1040._1_1_ = 'u';
    local_1040._2_1_ = 'n';
    local_1040._3_1_ = 'i';
    builtin_strncpy(acStack_103c,"ng freq star",0xc);
    uStack_1030 = 0xa74;
    local_102e = 0;
    FUN_00032218(3,&local_1040,0);
  }
  FUN_0002a808();
  if (DAT_00087b78 < 1) {
    iVar5 = 0;
    param5 = DAT_0048d398;
  }
  else {
    local_2a90 = 0;
    iVar5 = 0;
    iVar12 = DAT_0048d398;
    iVar14 = DAT_0048d398;
    do {
      param5 = iVar12;
      if (3 < DAT_00087bbc) {
        snprintf(local_2840,0x800,"level %d, freq_curr %d, freq_next %d\n",iVar5,iVar14,param5);
        FUN_00032218(3,local_2840,0);
      }
      iVar12 = 0;
      do {
        iVar6 = FUN_000201d8(iVar12);
        if (iVar6 != 0) {
          FUN_0001e1dc(DAT_00087df4,iVar12,DAT_0048d39c,iVar14,param5,0);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 4);
      iVar14 = 0;
      memcpy(aiStack_2040,&DAT_0008a9c4,0x1000);
      FUN_00034a5c(&LAB_0002bf20);
      do {
        iVar12 = FUN_000201d8(iVar14);
        if ((iVar12 != 0) && (iVar12 = FUN_0002002c(), 0 < iVar12)) {
          piVar17 = (int *)(iVar14 * 0x400 + 0x8a9c0);
          piVar9 = &local_1040 + iVar14 * 0x100;
          piVar10 = aiStack_2040 + iVar14 * 0x100;
          do {
            piVar11 = piVar10 + 1;
            piVar17 = piVar17 + 1;
            *piVar9 = *piVar17 - *piVar10;
            piVar9 = piVar9 + 1;
            piVar10 = piVar11;
          } while (piVar11 != aiStack_2040 + iVar12 + iVar14 * 0x100);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 4);
      iVar12 = 0;
      FUN_0002a3a4(param5,&local_1040);
      iVar14 = local_2a90;
      do {
        iVar6 = FUN_000201d8(iVar12);
        if (iVar6 != 0) {
          fVar18 = (float)FUN_0002a72c(iVar12,&local_1040);
          *(int *)((int)local_2a20 + iVar14) = (int)fVar18;
          iVar6 = FUN_0002002c();
          if (iVar6 < 1) {
            iVar16 = 0;
          }
          else {
            iVar16 = 0;
            iVar13 = 0;
            piVar9 = aiStack_2040 + iVar12 * 0x100 + 0x3ff;
            do {
              iVar13 = iVar13 + 1;
              piVar9 = piVar9 + 1;
              iVar16 = iVar16 + *piVar9;
            } while (iVar6 != iVar13);
          }
          *(int *)((int)local_2930 + iVar14) = iVar16;
          if (3 < DAT_00087bbc) {
            snprintf(local_2840,0x800,"chain %d, nonce_stdev %d, nonce_num %d\n",iVar12,(int)fVar18,
                     iVar16);
            FUN_00032218(3,local_2840,0);
          }
        }
        iVar12 = iVar12 + 1;
        iVar14 = iVar14 + 0x3c;
      } while (iVar12 != 4);
      uVar7 = FUN_0002002c();
      uVar8 = FUN_0002006c();
      lVar3 = (longlong)param5 * 180000000 * (longlong)(int)uVar7;
      lVar1 = (ulonglong)uVar8 *
              ((ulonglong)uVar7 * ((longlong)param5 * 180000000 & 0xffffffffU) & 0xffffffff);
      dVar19 = (double)FUN_000679c4((int)lVar1,
                                    uVar8 * (int)((ulonglong)lVar3 >> 0x20) +
                                    (int)lVar3 * ((int)uVar8 >> 0x1f) +
                                    (int)((ulonglong)lVar1 >> 0x20));
      iVar14 = (int)(longlong)(dVar19 * 1.4551915228366852e-11);
      local_2a5c[iVar5] = iVar14;
      if (3 < DAT_00087bbc) {
        snprintf(local_2840,0x800,"ideal_nonce_num %d\n",iVar14);
        FUN_00032218(3,local_2840,0);
      }
      iVar13 = 0;
      iVar12 = param5 - DAT_00087b7c;
      iVar6 = 0;
      iVar16 = local_2a90;
      do {
        iVar15 = iVar6 + 1;
        iVar6 = FUN_000201d8(iVar6);
        if ((iVar6 != 0) && (*(int *)((int)local_2a20 + iVar16) < 0x28)) {
          dVar20 = (double)VectorSignedToFloat(iVar14,(byte)(in_fpscr >> 0x16) & 3);
          dVar20 = dVar20 * 0.98;
          dVar19 = (double)VectorSignedToFloat(*(undefined4 *)((int)local_2930 + iVar16),
                                               (byte)(in_fpscr >> 0x16) & 3);
          uVar7 = in_fpscr & 0xfffffff | (uint)(dVar19 < dVar20) << 0x1f |
                  (uint)(dVar19 == dVar20) << 0x1e;
          in_fpscr = uVar7 | (uint)(NAN(dVar19) || NAN(dVar20)) << 0x1c;
          bVar2 = (byte)(uVar7 >> 0x18);
          if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            iVar13 = iVar13 + 1;
          }
        }
        iVar16 = iVar16 + 0x3c;
        iVar6 = iVar15;
      } while (iVar15 != 4);
      iVar14 = FUN_000201c8();
      iVar5 = iVar5 + 1;
      if (iVar14 <= iVar13) {
        if (3 < DAT_00087bbc) {
          builtin_strncpy(local_2840,"all chain tuing ",0x10);
          local_2830._0_1_ = 'd';
          local_2830._1_1_ = 'o';
          local_2830._2_1_ = 'n';
          local_2830._3_1_ = 'e';
          local_282c = 10;
          FUN_00032218(3,local_2840,0);
        }
        goto LAB_0002ae44;
      }
    } while ((iVar5 < DAT_00087b78) && (local_2a90 = local_2a90 + 4, iVar14 = param5, iVar5 != 0xf))
    ;
  }
LAB_0002ae44:
  local_2a84 = local_2930;
  iVar14 = 0;
  piVar9 = local_2a5c + 0xe;
  FUN_00020a54(0xff);
  do {
    iVar12 = FUN_000201d8(iVar14);
    if (iVar12 != 0) {
      iVar12 = iVar5 + -1;
      if (0 < iVar5) {
        iVar6 = 0x7fffffff;
        piVar10 = piVar9;
        do {
          piVar10 = piVar10 + 1;
          if (*piVar10 <= iVar6) {
            iVar6 = *piVar10;
          }
        } while (piVar10 != piVar9 + iVar5);
        iVar16 = 0;
        piVar10 = piVar9;
        do {
          piVar10 = piVar10 + 1;
          if (*piVar10 < 0x28) {
            dVar20 = (double)VectorSignedToFloat(local_2a5c[iVar16],(byte)(in_fpscr >> 0x16) & 3);
            dVar20 = dVar20 * 0.98;
            dVar19 = (double)VectorSignedToFloat(local_2a84[iVar16],(byte)(in_fpscr >> 0x16) & 3);
            uVar7 = in_fpscr & 0xfffffff | (uint)(dVar19 < dVar20) << 0x1f |
                    (uint)(dVar19 == dVar20) << 0x1e;
            in_fpscr = uVar7 | (uint)(NAN(dVar19) || NAN(dVar20)) << 0x1c;
            bVar2 = (byte)(uVar7 >> 0x18);
            if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
            goto LAB_0002af70;
LAB_0002b008:
            iVar12 = iVar16;
            break;
          }
LAB_0002af70:
          dVar19 = (double)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
          dVar20 = (double)VectorSignedToFloat(*piVar10,(byte)(in_fpscr >> 0x16) & 3);
          in_fpscr = in_fpscr & 0xfffffff;
          if (dVar20 < dVar19 * 1.25) {
            dVar20 = (double)VectorSignedToFloat(local_2a5c[iVar16],(byte)(in_fpscr >> 0x16) & 3);
            dVar20 = dVar20 * 0.98;
            dVar19 = (double)VectorSignedToFloat(local_2a84[iVar16],(byte)(in_fpscr >> 0x16) & 3);
            uVar7 = in_fpscr | (uint)(dVar19 < dVar20) << 0x1f | (uint)(dVar19 == dVar20) << 0x1e;
            in_fpscr = uVar7 | (uint)(NAN(dVar19) || NAN(dVar20)) << 0x1c;
            bVar2 = (byte)(uVar7 >> 0x18);
            if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
            goto LAB_0002b008;
          }
          iVar16 = iVar16 + 1;
        } while (iVar5 != iVar16);
      }
      iVar6 = DAT_0048d398 - DAT_00087b7c * iVar12;
      if (3 < DAT_00087bbc) {
        snprintf(local_2840,0x800,"chain %d best level %d, best freq %d\n",iVar14,iVar12,iVar6);
        FUN_00032218(3,local_2840,0);
      }
      FUN_0001e1dc(DAT_00087df4,iVar14,DAT_0048d39c,param5,iVar6,0);
    }
    iVar14 = iVar14 + 1;
    local_2a84 = local_2a84 + 0xf;
    piVar9 = piVar9 + 0xf;
    if (iVar14 == 4) {
      DAT_00087b88 = uVar4;
      if (3 < DAT_00087bbc) {
        builtin_strncpy(local_2840,"tuning freq end\n",0x10);
        local_2830 = local_2830 & 0xffffff00;
        FUN_00032218(3,local_2840,0);
      }
      return 0;
    }
  } while( true );
}

