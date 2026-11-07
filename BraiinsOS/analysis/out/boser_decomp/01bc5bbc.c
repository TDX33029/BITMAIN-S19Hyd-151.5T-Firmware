// FUN_01bc5bbc @ 01bc5bbc size=880 calls_out=7 calls_in=2
// strings: 

void FUN_01bc5bbc(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_34 [2];
  int local_2c;
  int local_24;
  
  local_24 = DAT_01d53560;
  iVar4 = param_1[0x10];
  param_1[0xe] = 0;
  if (param_1[7] == 0) {
    if (param_3 < 9) {
      param_1[0xe] = (uint)(param_3 < 9);
    }
    if (*(int *)(param_1[0xf] + 0x404) == 2) {
      iVar6 = 0;
      param_1[0xe] = 0;
      if (iVar4 != 2) {
        param_1[6] = 0;
        do {
          iVar4 = FUN_01b83ffc(param_1[0xf],iVar6);
          if (iVar4 == 0) {
            iVar4 = 1;
          }
          else {
            iVar4 = 1 << (0xbU - iVar4 & 0xff);
          }
          *(int *)(*param_1 + iVar6 * 4) = iVar4;
          iVar6 = iVar6 + 1;
          param_1[6] = param_1[6] + iVar4;
        } while (iVar6 != 0x100);
      }
      iVar8 = param_1[0xf];
      FUN_01bc05bc(local_34,iVar8 + 0xcb8);
      iVar4 = param_1[1];
      iVar6 = 0;
      param_1[7] = 0;
      do {
        uVar1 = *(int *)(local_2c + 4 + iVar6 * 8) + 0xffffU >> 0x10;
        if (uVar1 == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = 1 << (10 - uVar1 & 0xff);
        }
        *(int *)(iVar4 + iVar6 * 4) = iVar5;
        iVar6 = iVar6 + 1;
        param_1[7] = param_1[7] + iVar5;
      } while (iVar6 != 0x24);
      FUN_01bc05bc(local_34,iVar8 + 0x70c);
      iVar4 = param_1[2];
      iVar6 = 0;
      param_1[8] = 0;
      do {
        uVar1 = *(int *)(local_2c + 4 + iVar6 * 8) + 0xffffU >> 0x10;
        if (uVar1 == 0) {
          iVar5 = 1;
        }
        else {
          iVar5 = 1 << (10 - uVar1 & 0xff);
        }
        *(int *)(iVar4 + iVar6 * 4) = iVar5;
        iVar6 = iVar6 + 1;
        param_1[8] = param_1[8] + iVar5;
      } while (iVar6 != 0x35);
      FUN_01bc05bc(local_34,iVar8 + 0x408);
      iVar6 = param_1[3];
      param_1[9] = 0;
      iVar4 = 0;
      do {
        uVar1 = *(int *)(local_2c + 4 + iVar4 * 8) + 0xffffU >> 0x10;
        if (uVar1 == 0) {
          iVar8 = 1;
        }
        else {
          iVar8 = 1 << (10 - uVar1 & 0xff);
        }
        *(int *)(iVar6 + iVar4 * 4) = iVar8;
        iVar4 = iVar4 + 1;
        param_1[9] = param_1[9] + iVar8;
      } while (iVar4 != 0x20);
    }
    else {
      if (iVar4 != 2) {
        local_34[0] = 0xff;
        FUN_01b82f2c(*param_1,local_34,param_2,param_3);
        iVar6 = *param_1;
        iVar4 = 0;
        puVar2 = (uint *)(iVar6 + -4);
        do {
          puVar2 = puVar2 + 1;
          uVar1 = *puVar2 >> 8;
          if (*puVar2 != 0) {
            uVar1 = uVar1 + 1;
          }
          iVar4 = iVar4 + uVar1;
          *puVar2 = uVar1;
        } while (puVar2 != (uint *)(iVar6 + 0x3fc));
        param_1[6] = iVar4;
      }
      FUN_01bed4e2(param_1[1],&DAT_005638fc,0x90);
      iVar6 = 0;
      iVar4 = 0;
      piVar7 = &DAT_005638fc;
      do {
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + *piVar7;
        piVar7 = piVar7 + 1;
      } while (iVar4 != 0x24);
      param_1[7] = iVar6;
      iVar4 = param_1[2];
      puVar3 = (undefined4 *)(iVar4 + -4);
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 1;
      } while ((undefined4 *)(iVar4 + 0xd0) != puVar3);
      param_1[8] = 0x35;
      FUN_01bed4e2(param_1[3],&DAT_0056387c,0x80);
      iVar6 = 0;
      iVar4 = 0;
      piVar7 = &DAT_0056387c;
      do {
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + *piVar7;
        piVar7 = piVar7 + 1;
      } while (iVar6 != 0x20);
      param_1[9] = iVar4;
    }
  }
  else {
    if (iVar4 != 2) {
      iVar4 = FUN_01bc5b48(*param_1,0xff,0xc);
      param_1[6] = iVar4;
    }
    iVar4 = FUN_01bc5b48(param_1[1],0x23,0xb);
    param_1[7] = iVar4;
    iVar4 = FUN_01bc5b48(param_1[2],0x34,0xb);
    param_1[8] = iVar4;
    iVar4 = FUN_01bc5b48(param_1[3],0x1f,0xb);
    param_1[9] = iVar4;
  }
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  FUN_01bc55b4(param_1,param_4,0,0);
  return;
}

