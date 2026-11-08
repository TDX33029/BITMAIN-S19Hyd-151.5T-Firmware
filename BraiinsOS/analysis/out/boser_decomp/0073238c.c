// FUN_0073238c @ 0073238c size=480 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_0073238c(int *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  iVar3 = *param_1;
  if (iVar3 == 0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar6 = (uint *)param_1[2];
    puVar1 = (uint *)0x0;
    puVar4 = (uint *)((int)puVar6 + param_2);
    param_3 = (uint *)(param_1[3] + (uint)CARRY4((uint)puVar6,param_2));
    if ((!CARRY4(param_1[3],(uint)CARRY4((uint)puVar6,param_2))) &&
       (param_3 = (uint *)((uint)param_3 | param_1[5]), param_3 == (uint *)0x0)) {
      param_3 = (uint *)param_1[4];
      puVar1 = (uint *)(iVar3 + (int)puVar4);
      if ((puVar4 <= param_3 && param_3 <= (uint *)param_1[1]) && (param_3 != puVar4)) {
        puVar4 = (uint *)((int)param_3 - (int)puVar4);
        puVar2 = puVar1;
        if (&DAT_00000003 < puVar4) {
          if ((~(0x1010100 - *puVar1 | *puVar1) & 0x80808080) == 0) {
            uVar5 = (uint)puVar1 & 3;
            if (&DAT_00000008 < puVar4) {
              puVar6 = (uint *)(iVar3 + (int)param_3);
              param_3 = puVar6 + -2;
              for (puVar2 = (uint *)((int)puVar1 + (int)(4 - uVar5)); puVar2 <= param_3;
                  puVar2 = puVar2 + 2) {
                uVar5 = ~(0x1010100 - *puVar2 | *puVar2);
                bVar7 = (uVar5 & 0x80808080) != 0;
                if (!bVar7) {
                  uVar5 = ~(0x1010100 - puVar2[1] | puVar2[1]);
                }
                if (bVar7 || (uVar5 & 0x80808080) != 0) break;
              }
              if (puVar2 < puVar6) {
                do {
                  param_3 = (uint *)(uint)(byte)*puVar2;
                  if (param_3 == (uint *)0x0) goto LAB_0073255c;
                  puVar2 = (uint *)((int)puVar2 + 1);
                } while (puVar2 != puVar6);
              }
            }
            else if ((uint *)(4 - uVar5) < puVar4) {
              param_3 = (uint *)((int)param_3 + (uVar5 - param_2) + -4);
              iVar3 = (param_2 - uVar5) + iVar3 + 4;
              do {
                if (*(byte *)(iVar3 + (int)puVar6) == 0) {
                  puVar2 = (uint *)(iVar3 + (int)puVar6);
                  goto LAB_0073255c;
                }
                param_3 = (uint *)((int)param_3 + -1);
                iVar3 = iVar3 + 1;
              } while (puVar6 != param_3);
            }
          }
          else {
            puVar6 = puVar4;
            do {
              if ((byte)*puVar2 == 0) goto LAB_0073255c;
              puVar2 = (uint *)((int)puVar2 + 1);
              puVar6 = (uint *)((int)puVar6 + -1);
              param_3 = (uint *)0x0;
            } while (puVar6 != (uint *)0x0);
          }
        }
        else {
          puVar6 = puVar4;
          do {
            if ((byte)*puVar2 == 0) goto LAB_0073255c;
            puVar2 = (uint *)((int)puVar2 + 1);
            puVar6 = (uint *)((int)puVar6 + -1);
            param_3 = (uint *)0x0;
          } while (puVar6 != (uint *)0x0);
        }
      }
      puVar1 = (uint *)0x0;
    }
  }
LAB_00732418:
  return CONCAT44(param_3,puVar1);
LAB_0073255c:
  param_3 = (uint *)((int)puVar2 - (int)puVar1);
  if (puVar4 < param_3) {
    puVar1 = (uint *)0x0;
  }
  goto LAB_00732418;
}

