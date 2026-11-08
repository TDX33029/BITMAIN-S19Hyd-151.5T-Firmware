// FUN_01006268 @ 01006268 size=264 calls_out=4 calls_in=2
// strings: 

void FUN_01006268(int param_1)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 *local_24;
  
  if (*(int *)(param_1 + 0x18) != -1) {
    do {
      FUN_01006398(&local_34,param_1);
      puVar3 = local_30;
      uVar13 = local_34;
      if ((char)local_34 != '\x04') {
joined_r0x010062f8:
        if (((uVar13 & 0xff) < 5) && ((uVar13 & 0xff) != 3)) {
          return;
        }
        uVar9 = *puVar3;
        puVar11 = (undefined4 *)puVar3[1];
        pcVar4 = (code *)*puVar11;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar9);
        }
        if (puVar11[1] != 0) {
          thunk_FUN_016d3fb4(uVar9);
        }
        if (puVar3 == (undefined4 *)0x0) {
          return;
        }
        iVar12 = FUN_016d3bc8();
        uVar13 = *(byte *)((int)puVar3 + -3) & 0x1f;
        if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
           (uVar6 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar14 = uVar6 - 0x10, uVar6 == 0)) {
          iVar14 = (uint)*(ushort *)
                          (&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
        }
        uVar6 = (uint)(*(byte *)((int)puVar3 + -3) >> 5);
        iVar10 = *(int *)(iVar12 + 8) + 0x10;
        iVar7 = iVar14 * uVar13 + iVar14 + -4;
        iVar14 = iVar10 + iVar7;
        if (4 < uVar6) {
          if (uVar6 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar6 = *(uint *)(iVar14 + -4);
          if (uVar6 < 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar4)();
          }
          if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar4)();
          }
        }
        if ((uint)(iVar14 - (int)puVar3) < uVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar14 - uVar6) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar10 + iVar7) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar1 = *(byte *)(iVar12 + 0x14);
        uVar6 = 1 << uVar13;
        *(undefined1 *)((int)puVar3 + -3) = 0xff;
        *(undefined2 *)((int)puVar3 + -2) = 0;
        do {
          uVar8 = *(uint *)(iVar12 + 0x10);
          uVar5 = *(uint *)(iVar12 + 0xc) | uVar8;
          if ((uVar6 & uVar5) != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar4)();
          }
          if ((uVar8 == 0) || (uVar5 + uVar6 == (2 << (bVar1 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar12,uVar13);
            FUN_016dddc0(&DAT_018ddd48);
            if (local_24 == (undefined4 *)0x0) {
              return;
            }
            puVar3 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar3;
            FUN_016d6ac4(local_28,local_24);
            *puVar3 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar12 + 0x10) = uVar6 + uVar8;
            return;
          }
          puVar15 = (uint *)(iVar12 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar15);
            uVar5 = *puVar15;
            if (uVar8 != uVar5) goto LAB_016d409c;
            bVar2 = (bool)hasExclusiveAccess(puVar15);
          } while (!bVar2);
          *puVar15 = uVar6 + uVar8;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar8 == uVar5) {
            return;
          }
        } while( true );
      }
      iVar12 = *(int *)(param_1 + 8);
      iVar14 = *(int *)(param_1 + 0xc);
      FUN_01007fc4(&local_34,param_1,1,0,param_1 + 0x1c,4);
      if ((char)local_34 == '\x01') {
        FUN_0100719c(&local_28,local_30,local_2c);
        puVar3 = local_24;
        uVar13 = local_28;
        goto joined_r0x010062f8;
      }
    } while (iVar12 != *(int *)(param_1 + 8) || iVar14 != *(int *)(param_1 + 0xc));
  }
  return;
}

