// FUN_0102f204 @ 0102f204 size=700 calls_out=3 calls_in=0
// strings: 

void FUN_0102f204(uint param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  bVar2 = (byte)param_1;
  if (param_4 == 0) {
    if (0xe < param_1) {
      iVar5 = param_5[1];
      iVar3 = param_5[2];
      if (iVar3 == iVar5) {
        FUN_00f5f538(param_5,1);
        iVar4 = *param_5;
        iVar5 = param_5[1];
        iVar3 = param_5[2];
        *(undefined1 *)(iVar4 + iVar5) = 0xf;
        if (iVar3 == iVar5) goto LAB_0102f47c;
      }
      else {
        iVar4 = *param_5;
        *(undefined1 *)(iVar4 + iVar5) = 0xf;
      }
      param_1 = param_1 - 0xf;
      iVar5 = iVar5 + 1;
      param_5[1] = iVar5;
      if (0x7f < param_1) {
        do {
          bVar2 = (byte)param_1 | 0x80;
          if (iVar3 == iVar5) {
            FUN_00f5f538(param_5,1);
            iVar5 = param_5[1];
            iVar3 = param_5[2];
            iVar4 = *param_5;
            *(byte *)(iVar4 + iVar5) = bVar2;
            if (iVar3 == iVar5) goto LAB_0102f430;
          }
          else {
            *(byte *)(iVar4 + iVar5) = bVar2;
          }
          iVar5 = iVar5 + 1;
          uVar6 = param_1 >> 7;
          uVar1 = param_1 >> 0xe;
          param_5[1] = iVar5;
          param_1 = uVar6;
        } while (uVar1 != 0);
        goto LAB_0102f490;
      }
LAB_0102f448:
      cVar7 = bVar2 - 0xf;
      if (iVar3 != iVar5) goto LAB_0102f49c;
LAB_0102f454:
      FUN_00f5f538(param_5,1);
      iVar5 = param_5[1];
      iVar3 = param_5[2];
      *(char *)(*param_5 + iVar5) = cVar7;
      if (iVar3 == iVar5) {
LAB_0102f47c:
        local_28 = 1;
        local_24 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0(&local_28);
      }
      goto LAB_0102f4a0;
    }
    iVar5 = param_5[1];
    if (param_5[2] != iVar5) {
      *(byte *)(*param_5 + iVar5) = bVar2;
      iVar5 = iVar5 + 1;
      goto LAB_0102f4a4;
    }
    FUN_00f5f538(param_5,1);
    iVar5 = param_5[1];
    iVar3 = param_5[2];
    *(byte *)(*param_5 + iVar5) = bVar2;
    if (iVar3 == iVar5) goto LAB_0102f47c;
  }
  else {
    if (0xe < param_1) {
      iVar5 = param_5[1];
      iVar3 = param_5[2];
      if (iVar3 == iVar5) {
        FUN_00f5f538(param_5,1);
        iVar4 = *param_5;
        iVar5 = param_5[1];
        iVar3 = param_5[2];
        *(undefined1 *)(iVar4 + iVar5) = 0x1f;
        if (iVar3 == iVar5) goto LAB_0102f47c;
      }
      else {
        iVar4 = *param_5;
        *(undefined1 *)(iVar4 + iVar5) = 0x1f;
      }
      param_1 = param_1 - 0xf;
      iVar5 = iVar5 + 1;
      param_5[1] = iVar5;
      if (param_1 < 0x80) goto LAB_0102f448;
      do {
        bVar2 = (byte)param_1 | 0x80;
        if (iVar3 == iVar5) {
          FUN_00f5f538(param_5,1);
          iVar5 = param_5[1];
          iVar3 = param_5[2];
          iVar4 = *param_5;
          *(byte *)(iVar4 + iVar5) = bVar2;
          if (iVar3 == iVar5) {
LAB_0102f430:
            local_24 = 0;
            local_28 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_28);
          }
        }
        else {
          *(byte *)(iVar4 + iVar5) = bVar2;
        }
        iVar5 = iVar5 + 1;
        uVar6 = param_1 >> 7;
        uVar1 = param_1 >> 0xe;
        param_5[1] = iVar5;
        param_1 = uVar6;
      } while (uVar1 != 0);
LAB_0102f490:
      cVar7 = (char)uVar6;
      if (param_5[2] == iVar5) goto LAB_0102f454;
LAB_0102f49c:
      *(char *)(iVar4 + iVar5) = cVar7;
LAB_0102f4a0:
      iVar5 = iVar5 + 1;
      goto LAB_0102f4a4;
    }
    iVar5 = param_5[1];
    if (param_5[2] != iVar5) {
      *(byte *)(*param_5 + iVar5) = bVar2 | 0x10;
      iVar5 = iVar5 + 1;
      goto LAB_0102f4a4;
    }
    FUN_00f5f538(param_5,1);
    iVar5 = param_5[1];
    iVar3 = param_5[2];
    *(byte *)(*param_5 + iVar5) = bVar2 | 0x10;
    if (iVar3 == iVar5) {
      local_28 = 1;
      local_24 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_28);
    }
  }
  iVar5 = iVar5 + 1;
LAB_0102f4a4:
  param_5[1] = iVar5;
  FUN_0102f4c0(param_2,param_3,param_5);
  return;
}

