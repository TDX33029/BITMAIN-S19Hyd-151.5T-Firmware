// FUN_00e5d350 @ 00e5d350 size=692 calls_out=2 calls_in=49
// strings: uuuuuuuubtnufruuuuuuuuuuuuuuuuuu

void FUN_00e5d350(undefined1 *param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_2[2];
  if (*param_2 == iVar9) {
    FUN_00edff4c(param_2,iVar9,1,1,1);
    iVar9 = param_2[2];
  }
  iVar10 = iVar9 + 1;
  param_2[2] = iVar10;
  *(undefined1 *)(param_2[1] + iVar9) = 0x22;
  do {
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      if (param_4 == uVar6) {
        if (param_4 == 0) {
          if (*param_2 != iVar10) goto LAB_00e5d568;
        }
        else {
          if ((uint)(*param_2 - iVar10) < param_4) {
            FUN_00edff4c(param_2,iVar10,param_4,1,1);
            iVar10 = param_2[2];
          }
          FUN_016dd1aa(param_2[1] + iVar10,param_3,param_4);
          iVar10 = iVar10 + param_4;
          param_2[2] = iVar10;
          if (*param_2 != iVar10) goto LAB_00e5d568;
        }
        FUN_00edff4c(param_2,iVar10,1,1,1);
        iVar10 = param_2[2];
LAB_00e5d568:
        *(undefined1 *)(param_2[1] + iVar10) = 0x22;
        param_2[2] = iVar10 + 1;
        *param_1 = 4;
        return;
      }
      bVar1 = *(byte *)(param_3 + uVar6);
      bVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
      uVar5 = uVar6 + 1;
    } while (bVar2 == 0);
    if (uVar6 != 0) {
      if ((uint)(*param_2 - iVar10) < uVar6) {
        FUN_00edff4c(param_2,iVar10,uVar6,1,1);
        iVar10 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + iVar10,param_3,uVar6);
      iVar10 = iVar10 + uVar6;
      param_2[2] = iVar10;
    }
    param_4 = param_4 + ~uVar6;
    param_3 = param_3 + uVar6 + 1;
    if (bVar2 == 0x75) {
      uVar3 = (&DAT_00563e90)[bVar1 >> 4];
      uVar4 = (&DAT_00563e90)[bVar1 & 0xf];
      if ((uint)(*param_2 - iVar10) < 6) {
        FUN_00edff4c(param_2,iVar10,6,1,1);
        iVar10 = param_2[2];
      }
      puVar7 = (undefined4 *)(param_2[1] + iVar10);
      *puVar7 = 0x3030755c;
      iVar10 = iVar10 + 6;
      *(undefined1 *)((int)puVar7 + 5) = uVar4;
      *(undefined1 *)(puVar7 + 1) = uVar3;
      param_2[2] = iVar10;
    }
    else {
      if ((uint)(*param_2 - iVar10) < 2) {
        FUN_00edff4c(param_2,iVar10,2,1,1);
        iVar10 = param_2[2];
      }
      puVar8 = (ushort *)(param_2[1] + iVar10);
      iVar10 = iVar10 + 2;
      *puVar8 = (ushort)bVar2 << 8 | 0x5c;
      param_2[2] = iVar10;
    }
  } while( true );
}

