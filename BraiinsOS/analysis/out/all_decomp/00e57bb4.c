// FUN_00e57bb4 @ 00e57bb4 size=552 calls_out=2 calls_in=14
// strings: uuuuuuuubtnufruuuuuuuuuuuuuuuuuu

void FUN_00e57bb4(undefined1 *param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  
  do {
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      if (param_4 == uVar6) {
        if (param_4 != 0) {
          iVar8 = param_2[2];
          if ((uint)(*param_2 - iVar8) < param_4) {
            FUN_00edff4c(param_2,iVar8,param_4,1,1);
            iVar8 = param_2[2];
          }
          FUN_016dd1aa(param_2[1] + iVar8,param_3,param_4);
          param_2[2] = iVar8 + param_4;
        }
        *param_1 = 4;
        return;
      }
      bVar1 = *(byte *)(param_3 + uVar6);
      bVar2 = "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1];
      uVar5 = uVar6 + 1;
    } while (bVar2 == 0);
    if (uVar6 != 0) {
      iVar8 = param_2[2];
      if ((uint)(*param_2 - iVar8) < uVar6) {
        FUN_00edff4c(param_2,iVar8,uVar6,1,1);
        iVar8 = param_2[2];
      }
      FUN_016dd1aa(param_2[1] + iVar8,param_3,uVar6);
      param_2[2] = iVar8 + uVar6;
    }
    param_4 = param_4 + ~uVar6;
    param_3 = param_3 + uVar6 + 1;
    if (bVar2 == 0x75) {
      uVar3 = (&DAT_00563e90)[bVar1 >> 4];
      uVar4 = (&DAT_00563e90)[bVar1 & 0xf];
      iVar8 = param_2[2];
      if ((uint)(*param_2 - iVar8) < 6) {
        FUN_00edff4c(param_2,iVar8,6,1,1);
        iVar8 = param_2[2];
      }
      puVar7 = (undefined4 *)(param_2[1] + iVar8);
      *puVar7 = 0x3030755c;
      *(undefined1 *)((int)puVar7 + 5) = uVar4;
      *(undefined1 *)(puVar7 + 1) = uVar3;
      param_2[2] = iVar8 + 6;
    }
    else {
      iVar8 = param_2[2];
      if ((uint)(*param_2 - iVar8) < 2) {
        FUN_00edff4c(param_2,iVar8,2,1,1);
        iVar8 = param_2[2];
      }
      *(ushort *)(param_2[1] + iVar8) = (ushort)bVar2 << 8 | 0x5c;
      param_2[2] = iVar8 + 2;
    }
  } while( true );
}

