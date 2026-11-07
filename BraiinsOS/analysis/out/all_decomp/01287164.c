// FUN_01287164 @ 01287164 size=576 calls_out=7 calls_in=4
// strings: 

void FUN_01287164(uint *param_1,uint param_2,byte *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  pbVar1 = (byte *)(param_2 + 2);
  do {
    if (pbVar1 + -2 == param_3) {
      uVar2 = (int)param_3 - param_2;
LAB_0128721c:
      param_1[2] = uVar2;
      *param_1 = 0x80000000;
      param_1[1] = param_2;
      return;
    }
    if ((pbVar1[-2] == 0x25) && (pbVar1 + -1 != param_3)) {
      uVar2 = (uint)pbVar1[-1];
      uVar5 = uVar2 - 0x30;
      if (0x39 < uVar2) {
        uVar5 = (uVar2 - 0x41 & 0xffffffdf) + 10;
      }
      if ((uVar5 < 0x10) && (pbVar1 != param_3)) {
        uVar2 = (uint)*pbVar1;
        uVar8 = uVar2 - 0x30;
        if (0x39 < uVar2) {
          uVar8 = (uVar2 - 0x41 & 0xffffffdf) + 10;
        }
        if (uVar8 < 0x10) {
          pbVar1 = pbVar1 + 1;
          uVar2 = (int)param_3 - param_2;
          iVar7 = (int)pbVar1 - param_2;
          uVar10 = iVar7 - 3;
          if (uVar2 < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,uVar10,uVar2,&DAT_0188bb80);
          }
          if (iVar7 == 2 || (int)uVar10 < -1) {
                    /* WARNING: Subroutine does not return */
            FUN_00600c10();
          }
          if (uVar10 == 0) {
            local_2c = 1;
          }
          else {
            local_2c = FUN_0063f47c(uVar10,1);
            if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar10);
            }
          }
          local_30 = uVar10;
          FUN_016dd1aa(local_2c,param_2,uVar10);
          local_28 = uVar10;
          FUN_006029c0(&local_30);
          local_28 = iVar7 - 2;
          *(byte *)(local_2c + uVar10) = (byte)uVar8 | (byte)(uVar5 << 4);
          if (pbVar1 != param_3) {
            uVar5 = local_2c;
            do {
              uVar8 = local_28;
              pbVar6 = pbVar1 + 1;
              bVar9 = *pbVar1;
              if (*pbVar1 == 0x25) {
                bVar9 = 0x25;
                if (pbVar6 != param_3) {
                  uVar3 = (uint)pbVar1[1];
                  uVar10 = uVar3 - 0x30;
                  if (0x39 < uVar3) {
                    uVar10 = (uVar3 - 0x41 & 0xffffffdf) + 10;
                  }
                  if ((uVar10 < 0x10) && (pbVar1 + 2 != param_3)) {
                    uVar4 = (uint)pbVar1[2];
                    uVar3 = uVar4 - 0x30;
                    if (0x39 < uVar4) {
                      uVar3 = (uVar4 - 0x41 & 0xffffffdf) + 10;
                    }
                    bVar9 = 0x25;
                    if (uVar3 < 0x10) {
                      bVar9 = (byte)uVar3 | (byte)(uVar10 << 4);
                      pbVar6 = pbVar1 + 3;
                    }
                  }
                }
              }
              if (local_28 == local_30) {
                FUN_01287080(&local_30,local_28,(uint)(param_3 + (2 - (int)pbVar6)) / 3 + 1);
                uVar5 = local_2c;
              }
              *(byte *)(uVar5 + uVar8) = bVar9;
              local_28 = uVar8 + 1;
              pbVar1 = pbVar6;
            } while (pbVar6 != param_3);
          }
          if (local_30 != 0x80000000) {
            *param_1 = local_30;
            param_1[1] = local_2c;
            param_1[2] = local_28;
            return;
          }
          goto LAB_0128721c;
        }
      }
    }
    pbVar1 = pbVar1 + 1;
  } while( true );
}

