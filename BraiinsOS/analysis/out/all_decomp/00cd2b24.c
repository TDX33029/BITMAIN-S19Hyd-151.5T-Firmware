// FUN_00cd2b24 @ 00cd2b24 size=692 calls_out=2 calls_in=25
// strings: uuuuuuuubtnufruuuuuuuuuuuuuuuuuu

void FUN_00cd2b24(undefined1 *param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = param_2[2];
  if (*param_2 == iVar9) {
    FUN_00d653ec(param_2,iVar9,1,1,1);
    iVar9 = param_2[2];
  }
  *(undefined1 *)(param_2[1] + iVar9) = 0x22;
  iVar9 = param_2[2] + 1;
  param_2[2] = iVar9;
  do {
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      if (param_4 == uVar6) {
        if (param_4 != 0) {
          if ((uint)(*param_2 - iVar9) < param_4) {
            FUN_00d653ec(param_2,iVar9,param_4,1,1);
            iVar9 = param_2[2];
          }
          FUN_016dd1aa(param_2[1] + iVar9,param_3,param_4);
          iVar9 = param_2[2] + param_4;
          param_2[2] = iVar9;
        }
        if (*param_2 == iVar9) {
          FUN_00d653ec(param_2,iVar9,1,1,1);
          iVar9 = param_2[2];
        }
        *(undefined1 *)(param_2[1] + iVar9) = 0x22;
        iVar9 = param_2[2];
        *param_1 = 4;
        param_2[2] = iVar9 + 1;
        return;
      }
      bVar1 = *(byte *)(param_3 + uVar6);
      cVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
      uVar5 = uVar6 + 1;
    } while (cVar2 == '\0');
    if (uVar6 != 0) {
      if ((uint)(*param_2 - iVar9) < uVar6) {
        FUN_00d653ec(param_2,iVar9,uVar6,1,1);
        iVar9 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + iVar9,param_3,uVar6);
      iVar9 = param_2[2] + uVar6;
      param_2[2] = iVar9;
    }
    if (cVar2 == 'u') {
      uVar3 = (&DAT_00563e90)[bVar1 >> 4];
      uVar4 = (&DAT_00563e90)[bVar1 & 0xf];
      if ((uint)(*param_2 - iVar9) < 6) {
        FUN_00d653ec(param_2,iVar9,6,1,1);
        iVar9 = param_2[2];
      }
      puVar7 = (undefined4 *)(param_2[1] + iVar9);
      *puVar7 = 0x3030755c;
      *(undefined1 *)((int)puVar7 + 5) = uVar4;
      *(undefined1 *)(puVar7 + 1) = uVar3;
      iVar9 = 6;
    }
    else {
      if ((uint)(*param_2 - iVar9) < 2) {
        FUN_00d653ec(param_2,iVar9,2,1,1);
        iVar9 = param_2[2];
      }
      iVar8 = param_2[1];
      *(undefined1 *)(iVar8 + iVar9) = 0x5c;
      ((undefined1 *)(iVar8 + iVar9))[1] = cVar2;
      iVar9 = 2;
    }
    param_4 = param_4 + ~uVar6;
    param_3 = param_3 + uVar6 + 1;
    iVar9 = param_2[2] + iVar9;
    param_2[2] = iVar9;
  } while( true );
}

