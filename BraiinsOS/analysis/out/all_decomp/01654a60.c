// FUN_01654a60 @ 01654a60 size=868 calls_out=10 calls_in=1
// strings: 

int FUN_01654a60(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined1 local_2c;
  
  if (*(char *)(param_3 + 0x65) == '\x01') {
    iVar2 = *param_1;
    *(undefined1 *)(param_3 + 0x65) = 0;
    iVar2 = *(int *)(iVar2 + 8);
    DataMemoryBarrier(0xb);
    puVar3 = (uint *)(iVar2 + 0x80);
    do {
      uVar5 = *puVar3;
      bVar11 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar11);
    *puVar3 = uVar5 - 1;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 0xffff) == 1) {
      uVar12 = FUN_0164ff24(puVar3,iVar2 + 8);
      uVar5 = (uint)(uVar12 >> 0x20);
      if ((uVar12 & 1) != 0) {
        if (*(uint *)(iVar2 + 0x4c) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar5,*(uint *)(iVar2 + 0x4c),&DAT_018ac60c);
        }
        FUN_0163a560(*(undefined4 *)(*(int *)(iVar2 + 0x48) + uVar5 * 8 + 4),iVar2 + 0xb8);
      }
    }
  }
  iVar2 = param_1[1];
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018ad08c);
  }
  iVar6 = param_1[2];
  iVar2 = -1;
  param_1[1] = -1;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    FUN_01654f0c(iVar6);
    thunk_FUN_016d3fb4(iVar6);
    iVar2 = param_1[1];
    iVar6 = iVar2 + 1;
  }
  param_1[1] = iVar6;
  param_1[2] = param_3;
  uVar13 = thunk_FUN_016de0ee(iVar2,0x40);
  iVar2 = (int)uVar13 + (int)((ulonglong)uVar13 >> 0x20);
  if (*(char *)(iVar2 + 0x38) != '\x01') {
    if (*(char *)(iVar2 + 0x38) == '\x02') {
      cVar4 = '\x02';
      goto LAB_01654b9c;
    }
    FUN_015e8e6c(iVar2,FUN_01655ec4);
    *(undefined1 *)(iVar2 + 0x38) = 1;
  }
  cVar4 = *(char *)(iVar2 + 0x30);
  local_2c = *(undefined1 *)(iVar2 + 0x31);
  *(undefined2 *)(iVar2 + 0x30) = 0x8001;
LAB_01654b9c:
  (*(code *)**(undefined4 **)(param_2 + 8))(param_2);
  if (param_1[1] == 0) {
    uVar5 = 1;
    do {
      iVar6 = param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
        goto LAB_01654cc8;
      }
      iVar8 = *(int *)(iVar6 + 0x58);
      *(undefined4 *)(iVar6 + 0x58) = 0;
      if (iVar8 == 0) {
        *(byte *)(iVar6 + 100) = *(byte *)(*(int *)(*param_1 + 8) + 0x44) ^ 1;
        goto LAB_01654cc8;
      }
      if (*(char *)(iVar2 + 0x38) == '\x01') {
LAB_01654c18:
        cVar1 = *(char *)(iVar2 + 0x30);
        bVar11 = cVar1 == '\x01';
        if (bVar11) {
          cVar1 = *(char *)(iVar2 + 0x31);
        }
        if (bVar11 && cVar1 == '\0') {
          iVar7 = *(int *)(iVar6 + 0x50);
          iVar10 = *(int *)(*param_1 + 8) + 8;
          goto LAB_01654d04;
        }
      }
      else if (*(char *)(iVar2 + 0x38) != '\x02') {
        FUN_015e8e6c(iVar2,FUN_01655ec4);
        *(undefined1 *)(iVar2 + 0x38) = 1;
        goto LAB_01654c18;
      }
      if (2 < uVar5) {
        *(undefined1 *)(iVar6 + 100) = 0;
      }
      if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_018ad09c);
      }
      iVar7 = param_1[2];
      param_1[1] = -1;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        FUN_01654f0c(iVar7);
        thunk_FUN_016d3fb4(iVar7);
        iVar7 = param_1[1] + 1;
      }
      param_1[1] = iVar7;
      param_1[2] = iVar6;
      (*(code *)**(undefined4 **)(iVar8 + 8))(iVar8);
      uVar5 = uVar5 + 1;
    } while (param_1[1] == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb715c(&DAT_018ad0ac);
LAB_01654d04:
  iVar9 = *(int *)(iVar7 + 0xc);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  uVar5 = *(uint *)(iVar7 + 0x10);
  if (uVar5 - iVar9 < 0x100) {
    *(int *)(*(int *)(iVar7 + 0x14) + (uVar5 & 0xff) * 4) = iVar8;
    DataMemoryBarrier(0xb);
    *(uint *)(iVar7 + 0x10) = uVar5 + 1;
    goto LAB_01654cc8;
  }
  if (iVar9 != *(int *)(iVar7 + 8)) {
    FUN_0163a6a8(iVar10,iVar8);
    goto LAB_01654cc8;
  }
  iVar8 = FUN_01638570(*(undefined4 *)(iVar6 + 0x50),iVar8,iVar9,uVar5,iVar10);
  if (iVar8 == 0) {
LAB_01654cc8:
    if (cVar4 == '\x02') {
      return iVar6;
    }
    if (*(char *)(iVar2 + 0x38) != '\x01') {
      if (*(char *)(iVar2 + 0x38) == '\x02') {
        return iVar6;
      }
      FUN_015e8e6c(iVar2,FUN_01655ec4);
      *(undefined1 *)(iVar2 + 0x38) = 1;
    }
    *(undefined1 *)(iVar2 + 0x31) = local_2c;
    *(char *)(iVar2 + 0x30) = cVar4;
    return iVar6;
  }
  goto LAB_01654d04;
}

