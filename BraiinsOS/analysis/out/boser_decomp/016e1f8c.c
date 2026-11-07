// FUN_016e1f8c @ 016e1f8c size=400 calls_out=4 calls_in=2
// strings: 

void FUN_016e1f8c(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  bool bVar11;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  pcVar6 = (char *)param_2[2];
  pcVar9 = (char *)param_2[3];
  if (*param_2 == 1) {
    if ((pcVar9 == &DAT_00000001) && (cVar1 = *pcVar6, cVar1 == pcVar6[1])) {
      pcVar9 = (char *)thunk_FUN_01be5118(1);
      if (pcVar9 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(1,1);
      }
      *param_1 = 1;
      param_1[1] = pcVar9;
      param_1[2] = 1;
      *pcVar9 = cVar1;
      return;
    }
  }
  else {
    bVar11 = pcVar9 == &DAT_00000001;
    pcVar7 = pcVar6;
    if (bVar11) {
      pcVar7 = *(char **)pcVar6;
      pcVar9 = *(char **)(pcVar6 + 4);
    }
    if (bVar11 && pcVar7 == pcVar9) {
      uVar2 = SUB41(pcVar7,0);
      if (pcVar7 < (char *)0x80) {
        local_34 = (uint)pcVar7 & 0xff;
        uVar10 = 1;
      }
      else {
        uVar3 = (undefined1)((uint)pcVar7 >> 6);
        if (pcVar7 < (char *)0x800) {
          local_34 = (CONCAT11(uVar2,uVar3) & 0x3fff | 0x8000) | 0xc0;
          uVar10 = 2;
        }
        else {
          bVar4 = (byte)((uint)pcVar7 >> 0xc);
          if ((uint)pcVar7 >> 0x10 == 0) {
            bVar5 = bVar4 | 0xe0;
            local_34._1_3_ = (CONCAT11(uVar2,uVar3) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
            uVar10 = 3;
          }
          else {
            uVar10 = 4;
            bVar5 = (byte)((uint)pcVar7 >> 0x12) | 0xf0;
            local_34._1_3_ = CONCAT21(CONCAT11(uVar2,uVar3),bVar4) & 0x3f3f3f | 0x808080;
          }
          local_34 = CONCAT31(local_34._1_3_,bVar5);
        }
      }
      local_24 = &local_30;
      local_28 = 0;
      local_30 = 0;
      local_18 = 0;
      local_2c = 1;
      local_1c = 0x60000020;
      local_20 = &DAT_01d0a228;
      iVar8 = FUN_012fb940(&local_24,&local_34,uVar10);
      if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_11,&DAT_01d0a240,&DAT_01d30334);
      }
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = local_28;
      return;
    }
  }
  *param_1 = 0x80000000;
  return;
}

