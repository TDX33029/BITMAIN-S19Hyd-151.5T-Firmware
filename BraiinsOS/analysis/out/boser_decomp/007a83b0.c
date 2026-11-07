// FUN_007a83b0 @ 007a83b0 size=696 calls_out=7 calls_in=2
// strings: 

void FUN_007a83b0(undefined4 *param_1,uint *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_54;
  undefined1 local_50;
  undefined1 local_4f;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_4 != 0) {
    puVar9 = &local_68;
    do {
      if ((char)param_2[0x42c] == '\0') {
        FUN_01af9864(puVar9,&DAT_003e12a4,0x18);
      }
      else {
        iVar3 = 2;
        if ((uint)(*param_2 < 2) <= -param_2[1]) {
          iVar3 = *param_2 - 2;
        }
        if (iVar3 == 0) {
          FUN_019a18a8(puVar9,0xb,&DAT_003e12bc,0x25);
        }
        else {
          ppuVar4 = &PTR_LAB_01c09678;
          puVar1 = param_2;
          if (iVar3 == 1) {
            ppuVar4 = (undefined **)&UNK_01c09650;
            puVar1 = param_2 + 2;
          }
          (*(code *)ppuVar4[3])(&local_60,puVar1,param_3,param_4);
          uVar6 = local_5c;
          if ((char)local_60 == '\x04') {
            if (param_4 < local_5c) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,local_5c,param_4,&DAT_01c09720);
            }
            FUN_0130a5b0(param_2 + 0x422,param_3,local_5c);
            uVar5 = param_2[0x428];
            uVar7 = param_2[0x429] + (uint)CARRY4(uVar5,uVar6);
            param_2[0x428] = uVar5 + uVar6;
            param_2[0x429] = uVar7;
            if (uVar7 == 0) goto LAB_007a851c;
            uVar6 = param_2[0x41a];
            iVar3 = 0;
            if (uVar6 != 0) {
              iVar3 = param_2[0x419] + uVar6 * 0xc0;
            }
            if (uVar6 != 0 && iVar3 != 0xc0) {
              if (*(char *)(iVar3 + -0x15) != '\0') goto LAB_007a851c;
              FUN_007a8c6c(&local_54,param_2);
              if (local_54 != 0x80000007) {
                iVar3 = 1;
                if (0x80000000 < local_54) {
                  iVar3 = local_54 + 0x7fffffff;
                }
                    /* WARNING: Could not recover jumptable at 0x007a8610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_007a8614 + *(int *)(&DAT_007a8614 + iVar3 * 4)))
                          (*(int *)(&DAT_007a8614 + iVar3 * 4),0x15,local_4f,local_50);
                return;
              }
              FUN_01af9864(&local_30,&DAT_003e12e1,0x22);
              local_68 = local_30;
              local_64 = local_2c;
            }
            else {
              FUN_01af9864(&local_2c,&DAT_003e1303,0x14);
              local_68 = local_2c;
              local_64 = local_28;
            }
          }
          else {
LAB_007a851c:
            local_68 = local_60;
            local_64 = local_5c;
          }
        }
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(local_68 & 0xff) {
      case 0:
        if (local_64 != 4) goto LAB_007a8be4;
        goto LAB_007a85a8;
      case 1:
        cVar2 = local_68._1_1_;
        break;
      case 2:
      case 3:
        cVar2 = *(char *)(local_64 + 8);
        break;
      default:
        if (local_64 == 0) {
          puVar9 = &DAT_01d2e7c8;
          goto LAB_007a8be4;
        }
        if (param_4 < local_64) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(local_64,param_4,param_4,&DAT_01d2e7d0);
        }
        param_3 = param_3 + local_64;
        param_4 = param_4 - local_64;
        goto LAB_007a85ac;
      }
      if (cVar2 != '#') {
LAB_007a8be4:
        uVar8 = puVar9[1];
        *param_1 = *puVar9;
        param_1[1] = uVar8;
        return;
      }
LAB_007a85a8:
      FUN_0069263c(local_68 & 0xff,local_64);
LAB_007a85ac:
    } while (param_4 != 0);
  }
  *(undefined1 *)param_1 = 4;
  return;
}

